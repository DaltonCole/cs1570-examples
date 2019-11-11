// Header stuff
// Purpose: Implement templeted Stack class

template <typename T>
Stack<T>::Stack(const Stack<T>& other) {
    m_size = other.m_size;
    for(int i = 0; i < m_size; i++) {
        m_data[i] = other.m_data[i];
    }
}

template <typename T>
bool Stack<T>::push(const T& datum) {
    bool good = false;
    if(!isFull()) {
        m_data[m_size] = datum;
        m_size++;
        good = true;
    }
    return good;
}

template <typename T>
bool Stack<T>::pop(T& datum) {
    bool good = false;
    if(!isEmpty()) {
        m_size--;
        datum = m_data[m_size];
        good = true;
    }
    return good;
}
