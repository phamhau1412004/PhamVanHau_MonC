// Thêm vào phần showAll() trong linearList;

virtualvoid showAll(ostream& outDev) {
    // in giá trị của đối tượng hiện tại
    outDev << datald << "";

    // Nếu tồn tại đối tượng con, gọi đệ quy để in giá trị của đối tượng con
    if(subLst != NULL) {
        subLst = showAll(outDev);
    }
}