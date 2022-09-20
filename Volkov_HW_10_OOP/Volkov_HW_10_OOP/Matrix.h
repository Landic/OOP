#include <iostream>
using namespace std;

template<class Temp> class Matrix {
    Temp** arr;
    int rows;
    int cols;
    template<class Temp>
    friend ostream& operator<<(ostream& os, Matrix<Temp>& obj);
public:
    Matrix();
    Matrix(int rows, int cols);
    Matrix(const Matrix<Temp>& obj);
    ~Matrix();
    void Rand();
    void Print();
    Matrix operator+(int a);
    Matrix operator-(int a);
    Matrix operator*(int a);
    Matrix operator/(int a);
    bool operator>(Matrix<Temp> obj);
    int Min_Number();
    int Max_Number();
    Matrix<Temp>& operator=(const Matrix<Temp>& obj);
    Temp** Get_Arr();
    int Get_Rows();
    int Get_Cols();
};
template<class Temp>
ostream& operator<<(ostream& os, Matrix<Temp>& obj)
{
    for (int i = 0; i < obj.rows; i++) {
        for (int j = 0; j < obj.cols; j++) {
            os << obj.arr[i][j] << "\t";
        }
        os << endl << endl;
    }

    return os;
}

template<class Temp> Matrix<Temp>::Matrix() {
    arr = nullptr;
    rows = cols = 0;
}

template<class Temp> Matrix<Temp>::Matrix(int rows, int cols) {
    this->rows = rows;
    this->cols = cols;
    arr = new Temp * [rows];
    for (int i = 0; i < this->rows; i++) {
        arr[i] = new Temp[cols];
    }
}

template<class Temp> Matrix<Temp>::Matrix(const Matrix<Temp>& obj) {
    rows = obj.rows;
    cols = obj.cols;
    arr = new Temp * [rows];
    for (int i = 0; i < rows; i++) {
        arr[i] = new Temp[cols];
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] = obj.arr[i][j];
        }
    }
}

template<class Temp> Matrix<Temp>::~Matrix() {
    for (int i = 0; i < rows; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
}

template<class Temp> void Matrix<Temp>::Rand() {
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr[i][j] = rand() % 100 * 1.6;
        }
    }
}

template<class Temp> void Matrix<Temp>::Print() {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl << endl;
    }
}

template<class Temp>
Matrix<Temp> Matrix<Temp>::operator+(int a)
{
    Matrix<Temp>temp = *this;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            temp.arr[i][j] = temp.arr[i][j] + a;
        }
    }
    return temp;
}




template<class Temp>
Matrix<Temp> Matrix<Temp>::operator-(int a)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr[i][j] -= a;
        }
    }
    return *this;
}

template<class Temp>
Matrix<Temp> Matrix<Temp>::operator*(int a)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr[i][j] *= a;
        }
    }
    return *this;
}

template<class Temp>
Matrix<Temp> Matrix<Temp>::operator/(int a)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr[i][j] /= a;
        }
    }
    return *this;
}

template<class Temp>
inline bool Matrix<Temp>::operator>(Matrix<Temp> obj)
{
    if (rows > obj.rows && cols > obj.cols) {
        return true;
    }
    return false;
}

template<class Temp>
int Matrix<Temp>::Min_Number()
{
    int min = 999999;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] < min) {
                min = arr[i][j];
            }
        }
    }
    return min;
}

template<class Temp>
int Matrix<Temp>::Max_Number()
{
    int max = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }
    return max;
}

template<class Temp>
inline Matrix<Temp>& Matrix<Temp>::operator=(const Matrix<Temp>& obj)
{
    if (this == &obj) {
        return *this;
    }
    if (arr != nullptr) {
        this->~Matrix();
    }
    rows = obj.rows;
    cols = obj.cols;
    arr = new Temp * [rows];
    for (int i = 0; i < rows; i++) {
        arr[i] = new Temp[cols];
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] = obj.arr[i][j];
        }
    }
    return *this;
}

template<class Temp>
Temp** Matrix<Temp>::Get_Arr() 
{
    return arr;
}

template<class Temp>
int Matrix<Temp>::Get_Rows() 
{
    return rows;
}

template<class Temp>
int Matrix<Temp>::Get_Cols()
{
    return cols;
}

template <class Temp>
ostream& operator<<(ostream& os, const Matrix<Temp>& obj)
{
    os << obj.GetMas() << "|";
    return os;
}

template<class Temp>
Matrix<Temp> operator+(int a, const Matrix<Temp>& obj){
    Matrix<Temp>rez = obj;
    for (int i = 0; i < obj.Get_Rows(); i++)
    {
        for (int j = 0; j < obj.Get_Cols(); j++)
        {
            rez.Get_Arr()[i][j] = rez.Get_Arr()[i][j] + a;
        }
    }
    return rez;
}