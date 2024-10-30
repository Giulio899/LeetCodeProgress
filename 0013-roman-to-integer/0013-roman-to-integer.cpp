class Solution {
public:
    int romanToInt(string s) {
        int res=0;

        for(int i=s.size();i>=0;i--){
           switch (s[i]){
                case 'I':
                    res=res+1;
                    break;
                case 'V':
                    if(i==0 || s[i-1]!='I') res=res+5;
                    else {
                        res=res+4;
                        i--;
                    }
                    break;
                case 'X':
                    if(i==0 || s[i-1]!='I') res=res+10;
                    else {
                        res=res+9;
                        i--;
                    }
                    break;
                case 'L':
                    if(i==0 || s[i-1]!='X') res=res+50;
                    else {
                        res=res+40;
                        i--;
                    }
                    break;
                case 'C':
                    if(i==0 || s[i-1]!='X') res=res+100;
                    else {
                        res=res+90;
                        i--;
                    }
                    break;
                case 'D':
                    if(i==0 || s[i-1]!='C') res=res+500;
                    else {
                        res=res+400;
                        i--;
                    }
                    break;
                case 'M':
                    if(i==0 || s[i-1]!='C') res=res+1000;
                    else {
                        res=res+900;
                        i--;
                    }
                    break;
                default:
                    break;
           }
        }

        return res;
    }
};