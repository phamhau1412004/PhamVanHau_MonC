// Viết mã nguồn phương thức countAll() trong linerList'
// Lớp linearList
class linearList : public absList {
    absList* sub:ít;
    public:
    linearList(int old) : abs ist(pld) {
        subLst = NULL;
    }
    virtual->linearList() {
        if (subLst != NULL)
        delete subLst;
    }
    virtualabsList* addFirst(int pld) {
        linearList *Lst = new linearList(pld);
        Lst = subLst = this;
        return Lst;
    }
    virtual absList* getSublteam () {
        return subLst;
    }
    virtualvoid showAll(ostream& outDev) {
    }
    virtual int countAll(){
        int count = 1;
        if(subList != NULL){ // Kiểm tra sự tồn tại của subList 
        count ++ subList->countAll();
        }
        return count;
    }
}; // Kết thúc linearList