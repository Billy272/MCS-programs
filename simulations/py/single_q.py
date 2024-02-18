import random
import math

run = 10
mean = 10
sd = 1.5
mue = 9.5
sigma = 1.0
wt = 0
iat = 0
cat = 0
cwt = 0
cit = 0
se = 0

with open("output.txt", "w") as outfile:
    outfile.write("\ni r' IAT CAT SB r' ST SE WT IT \n")
    for j in range(1, run + 1):
        sum_x = sum(random.random() for _ in range(12))
        x1 = mean + sd * (sum_x - 6)
        iat = x1
        cat += iat

        if cat <= se:
            sb = se
            wt = se - cat
            cwt += wt
        else:
            sb = cat
            it = sb - se
            cit += it

        sum_x2 = sum(random.random() for _ in range(12))
        x2 = mue + sigma * (sum_x2 - 6)
        st = x2
        se = sb + st

        outfile.write(f"{j}\t{round(x1, 4)}\t{round(iat, 4)}\t{round(cat, 4)}\t{round(sb, 4)}"
                      f"\t{round(x2, 4)}\t{round(st, 4)}\t{round(se, 4)}\t{round(wt, 4)}"
                      f"\t{round(it, 4)}\n")

    awt = cwt / run
    pcu = (cat - cit) * 100 / cat
    outfile.write("Average waiting time\n")
    outfile.write(f"{awt}\n")
    outfile.write("Percentage capacity utilization\n")
    outfile.write(f"{pcu}\n")

