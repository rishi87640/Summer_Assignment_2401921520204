class Solution {
public:
    int compress(vector<char>& chars) {
        
    int n=chars.size();
    int i=0;
    int idx=0;

    while(i<n)
    {
    
    int j=i;

    while(j<n && chars[j]==chars[i])
    {
        j++;
    }

    int count = j-i;

    chars[idx] = chars[i];
    idx++;

    if(count>1)
    {
        string cnt=to_string(count);

        for(char c: cnt)
        {
            chars[idx++] = c;

        }
    }
    i=j;
    }
    return idx;

    }
};