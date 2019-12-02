

template <typename T>
Matrix<T>::Matrix(const int r, const int c, const T default_value) {
    rows = r;
    columns = c;
    matrix = new T*[rows];

    for(int i = 0; i < rows; i++) {
        matrix[i] = new T[columns];

        for(int j = 0; j < columns; j++) {
            matrix[i][j] = default_value;        
        }
    }
}

// Get
template <typename T>
T Matrix<T>::operator()(const int r, const int c) const {
    return matrix[r][c];
}

// Set
template <typename T>
T& Matrix<T>::operator()(const int r, const int c) {
    return matrix[r][c];
}

template <typename U>
ostream& operator<<(ostream& os, const Matrix<U>& m) {
    for(int i = 0; i < m.rows; i++) {
        for(int j = 0; j < m.columns; j++) {
            os << m(i, j) << " ";
        }
        os << endl;
    }
    return os;
}




















