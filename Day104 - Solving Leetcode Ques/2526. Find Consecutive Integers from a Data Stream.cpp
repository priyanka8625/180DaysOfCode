class DataStream {
    int value;
    int k;
    int parsedIntCount=0;
public:
    DataStream(int value, int k) {
        this->value = value;
        this->k = k;
    }
    
    bool consec(int num) {
        if(num == value)
            this->parsedIntCount++;
        else
            this->parsedIntCount = 0;
        return this->parsedIntCount>=k;
    }
};

/**
 * Your DataStream object will be instantiated and called as such:
 * DataStream* obj = new DataStream(value, k);
 * bool param_1 = obj->consec(num);
 */
