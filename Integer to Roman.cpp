class Solution {
public:
    void process(string& sb, char major, char minor, char middle, int val) {
        //TC=O(log N) SC=O(1) 
        if (val <= 3) {
            for (int i = 1; i <= val; i++) {
                sb.push_back(minor);
            }
        } else if (val == 4) {
            sb.push_back(minor);
            sb.push_back(middle);
        } else if (val == 5) {
            sb.push_back(middle);
        } else if (val <= 8) {
            sb.push_back(middle);
            for (int i = 6; i <= val; i++) {
                sb.push_back(minor);
            }
        } else if (val == 9) {
            sb.push_back(minor);
            sb.push_back(major);
        }
    }

    string intToRoman(int num) {
        string sb = "";
        process(sb,'*','M','*',num/1000); //major minor middle
        num = num % 1000;

        process(sb,'M','C','D',num/100);
        num = num % 100;

        process(sb,'C','X','L',num/10);
        num = num % 10;

        process(sb,'X','I','V',num);

        return sb;
    }
};
