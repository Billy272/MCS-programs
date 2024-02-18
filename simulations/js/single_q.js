const fs = require('fs');

function main() {
    let i, j, run = 10;
    let x, x1, x2, st, awt, pcu, wt = 0, iat = 0, it;
    let mean = 10, sd = 1.5, mue = 9.5, sigma = 1.0;
    let sb = 0, se = 0, cit = 0, cat = 0, cwt = 0;
    let outfile = fs.createWriteStream('output.txt', { flags: 'w' });
    outfile.write("\ni r' IAT CAT SB r' ST SE WT IT \n");
    for (j = 1; j <= run; j++) {
        
        let sum = 0;
        for (i = 1; i <= 12; i++) {
            x = Math.random();
            sum += x;
        }
        x1 = mean + sd * (sum - 6);
        iat = x1;
        
        cat += iat;
        
        if (cat <= se) {
            sb = se;
            wt = se - cat;
            cwt = cwt + wt;
            
        } else {
            sb = cat;
            it = sb - se;
            cit = cit + it;
        }
        
        sum = 0;
        for (i = 1; i <= 12; i++) {
            x = Math.random();
            sum += x;
        }
        x2 = mue + sigma * (sum - 6);
        st = x2;
        se = sb + st;
        
        outfile.write(`${j}\t${x1.toFixed(4)}\t${iat.toFixed(4)}\t${cat.toFixed(4)}\t${sb.toFixed(4)}\t${x2.toFixed(4)}\t${st.toFixed(4)}\t${se.toFixed(4)}\t${se.toFixed(4)}\t${wt.toFixed(4)}\t${it.toFixed(4)}\n`);
    }
    awt = cwt / run;
    pcu = (cat - cit) * 100 / cat;
    outfile.write("Average waiting time\n");
    outfile.write(`${awt}\n`);
    outfile.write("Percentage capacity utilization\n");
    outfile.write(`${pcu}\n`);
    outfile.end();
}

main();

