int uniqueSubstrings(string input)
{
    //Write your code here

    int n = input.size();

    if(n==0) return 0;

    if(n==1) return 1;

    vector<int>lastindx(256,-1);

    int maxlen = 0;
    int start = 0;

    for(int i=0; i<n; i++){

        if(lastindx[input[i]]>=start){
            start = lastindx[input[i]]+1;
        }

        lastindx[input[i]] = i;


        maxlen = max(maxlen, i-start+1);
    }

    return maxlen;
