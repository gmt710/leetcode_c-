class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        # 借鉴方法：https://blog.csdn.net/LaoBlack/article/details/81279403
        # 思想：如果末位不为9，则末位加一再返回值；
        # 如果末位为9，则赋值为0，不断进位，直到碰到不为9的，加一，再返回值
        # 如果一直到最高位还需要进位，则将1插入最高位，返回值
        int size = digits.size();
        for(int i = size-1; i>=0; i--){
            if(digits[i] != 9){
                digits[i] += 1;
                return digits;
            }
            else
                digits[i] = 0;
        }
        # 此处是我自己的修改
        digits.insert(digits.begin(),1);
        return digits;
        
    }
    //     # 下面这种方法对于数超出取值范围的就不行了
    //     long int digit = 0,k =0;
    //     int size = digits.size();
    //     for(int i=0; i<=size-1; i++){
    //         digit = 10*digit + digits[i];
    //     }
    //     digit = digit + 1;
    //     # 使用 clear ，清空元素，但不回收空间
    //     digits.clear();
    //     while(digit){
    //         k = digit % 10;
    //         digit = digit / 10;
    //         digits.insert(digits.begin(),k);
    //     }
    //     return digits;
    // }
};
