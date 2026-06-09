class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
      int n1=s1.size();
      int n2=s2.size();

      if(n1>n2)
      {
        return false;
      }

      int freq1[26] = {0};
      int freq2[26] = {0};

      for(int i=0;i<n1;i++)
      {
        freq1[s1[i]-'a']++;
        freq2[s2[i]-'a']++;

      }   

      bool same = true;
      for(int i=0;i<26;i++)
      {
        if(freq1[i]!=freq2[i])
        {
            same=false;
            break;
        }
      }

      if(same)
       return true;

        for(int i=n1;i<n2;i++)
        {
            freq2[s2[i]-'a']++;
            freq2[s2[i-n1]-'a']--;

            same = true;


            for(int j=0;j<26;j++)
            {
                if(freq1[j]!=freq2[j])
                {
                    same = false;
                    break;

                }
            }

            if(same)
              return true;
        }

         return false;
    }
};