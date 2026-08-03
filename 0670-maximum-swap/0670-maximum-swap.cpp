class Solution {
public:
    int maximumSwap(int num) {
     string num2=to_string(num);// convert num to string num2

     int n= num2.size();
     char maxm = num2[n-1];// assume that our last character is maximum initially
    
    int max_index=n-1;

    int index1=-1;// to store the minimum value index
    int index2=-1;// to store the maximum value index
     for(int i=n-2; i>=0; i--)
     {
        if(num2[i]>maxm)
        {
            maxm=num2[i];
            max_index=i;
        }
        else if(num2[i]<maxm)
        {
            index1=i;
            index2=max_index;
        }

     }
     if(index1!=-1)
     {
        swap(num2[index1],num2[index2]);
     }

    return stoi(num2);

    }
};