#include<iostream> 

class Amigos{
    public: 
        int edad{20};
        double peso{80};
        void print(){ 
            std::cout << "Mi nombre es willy " << '\n' << "Mi edad es: " << edad << '\n' << "Mi peso es: " << peso << '\n';
        }
        void setfecha(int& e,int& f,int& g){
            m_print(e,f,g);
        }
    private:
        void m_print(int& m_ano, int& m_mes, int& m_dia){ 
            std::cout << "El día de hoy es: " << m_ano << '/' << m_mes << '/' << m_dia << '\n';
        }
};

int main(){
    Amigos willy{};
    willy.print();
        {
        int dia{27};
        int mes{01};
        int ano{2026};
        willy.setfecha(ano,mes,dia);
        }
    return 0; 
}