def AND(A,B):
    print(A,"AND",B,A&B)
def OR(A,B):
    print(A,"OR",B,A | B)  
def XOR(A,B):
    print(A,"XOR",B,A^B)
def NOT(A):
    print(A,"NOT",~A+2)

def MUX(S0,S1,A,B):
    if (S0==0 and S1==0):
        AND(A,B)
    else:
         if (S0==0 and S1==1):
                XOR(A,B)
         else:
             if (S0==1 and S1==0):
                    OR(A,B)
             else:
                   if (S0==1 and S1==1):
                        NOT(A)

#logic gates#

for S0 in range(2):
    for S1 in range(2):
        for A in range(2):
            for B in range(2):
                MUX(S0,S1,A,B)
