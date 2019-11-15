class Solution:
    # @param A : list of integers
    # @return a list of integers
    def plusOne(self, A):
        
        if(A[0]==0 and len(set(A))==1):
            return [1]
        else:
            index =0;
            while(A[index]==0):
                del A[index]
            s=''
            for i in A:
                s +=str(i)
            num = str(int(s)+1)
            del A[:]
            for i in num:
                A.append(int(i))
        return A
