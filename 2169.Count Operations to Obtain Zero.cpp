class Solution
{
public:
    int countOperations(int num1, int num2)
    {
        int i = 0;
        while (num1 != 0 && num2 != 0)
        {
            if (num1 <= num2)
            {
                num2 = num2 - num1;
                i++;
            }
            else if (num1 >= num2)
            {
                num1 = num1 - num2;
                i++;
            }
        }
        return i;
    }
};

/*
for loop tab use hota hai jab hume pehle se pata ho
ki loop kitni baar chalega.

isliye yaha for loop use nahi kar sakte
yaha operation 3 ya 3000 opartion bhi lag sakte num1 ya num2 ko zero banane mai

iski jagah while loop lena prefer
kyuki
while loop tab tak chalta hai jab tak condition true hai.
Yaha condition kya hai?
Jab tak dono numbers mai koi 0 nahi ho.
*/
