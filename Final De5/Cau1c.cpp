// giải pháp lớp đối tượng Singleton
class Singleton {
    public:
    static Singleton& getlnstance() {
        stactic Singleton instance;
        return instance;
    }
    private:
    Singleton() {} // hàm tao mặc định là private để không cho phép thể hiện từ bên ngoài
    Singleton(const Singleton& other) = delete; // Vô hiệu hóa toán tử sao chép
    Singleton& operator=(const Singleton& other) = delete; // Vô hiệu hóa toán tử gán
}