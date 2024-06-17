class Solution {
public:
    string thousands(int num){
        if(num == 1000)
            return "M";
        else if(num == 2000)
            return "MM";
        return "MMM";//for 3000
    }
    string hundreds(int num){
         if(num == 100)
            return "C";
        else if(num == 200)
            return "CC";
        else if(num == 300)
            return "CCC";
        else if(num == 400)
            return "CD";
        else if(num == 500)
            return "D";
        else if(num == 600)
            return "DC";
        else if(num == 700)
            return "DCC";
        else if(num == 800)
            return "DCCC";
        return "CM";//for 900
    }
    string tens(int num){
        if(num == 10)
            return "X";
        else if(num == 20)
            return "XX";
        else if(num == 30)
            return "XXX";
        else if(num == 40)
            return "XL";
        else if(num == 50)
            return "L";
        else if(num == 60)
            return "LX";
        else if(num == 70)
            return "LXX";
        else if(num == 80)
            return "LXXX";
        return "XC";//for 90
    }
    string ones(int num){
        if(num == 1)
            return "I";
        else if(num == 2)
            return "II";
        else if(num == 3)
            return "III";
        else if(num == 4)
            return "IV";
        else if(num == 5)
            return "V";
        else if(num == 6)
            return "VI";
        else if(num == 7)
            return "VII";
        else if(num == 8)
            return "VIII";
        return "IX";//for 9
    }
    string intToRoman(int num) {
        string ans;
        int i=1;
        while(num){
            int lastNum = num%10;
            //convert the digit into it's corresponding thousand or ten or one number
            lastNum *= i;
            if(1<=lastNum && lastNum <=9)
                //insert the roman number at 0th position t maintin sequence
                ans.insert(0, ones(lastNum));
            else if(10<=lastNum && lastNum <=90)
                ans.insert(0, tens(lastNum));
            else if(100<=lastNum && lastNum <=900)
                ans.insert(0, hundreds(lastNum));
            else if(1000<=lastNum && lastNum <=3000)
                ans.insert(0, thousands(lastNum));
            
            //update the original number to extract next digits
            num /= 10;
            //update i to make it 10, 100, 1000
            i *= 10; 
        }   
        return ans;   
    }
};
