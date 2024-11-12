// 2-18 
#include <iostream>
#include <math.h>
#include <list>
#include <cstring>
#include <map>
using namespace std;

long double factoringFunc(int n) {

    long double f15 = 1;
    if (n < 0)
    {
        return f15 = 0;
    }
    for (int i = 1; i <= n; ++i) {
            f15 *= i;
    }
    return f15;
}

double randomE() {
    while (true)
    {
        double x = ((double)rand() / (RAND_MAX));
        if (x>0 && x<1)
        {
            return x;
        }
    }
}

bool compare_pair(pair<string, long double>& pair1, pair<string, long double>& pair2) {
    return pair1.second < pair2.second;
}

list<pair<string, long double>> listingAlg(int n) {
   
    map<string, long double> func;
    func["n ="] = n;
    func["2^n ="] = pow(2,n);
    func["nlgn ="] = n * log10(n);
    func["lnn ="] = log(n);
    func["n-n^3+7n^5 ="] = n - pow(n, 3) + 7 * pow(n, 5);
    func["lgn ="] = log10(n);
    func["root of n ="] = pow(n,0.5);
    func["e^n ="] = exp(n);
    func["n^2+lgn ="] = pow(n,2) + log10(n);
    func["n^2 ="] = pow(n, 2);
    func["2^(n-1) ="] = pow(2,n-1);
    func["lglgn ="] = log10(log10(n));
    func["n^3 ="] = pow(n, 3);
    func["lgn^2 ="] = pow(log10(n),2);
    func["n! ="] = factoringFunc(n);
    func["n^(1+E) where 0<E<1 ="] = pow(n,1+randomE());

    list<pair<string, long double> > A;
    for (auto& it : func) {
        A.push_back(it);
    }
   return A;
}

int main()
{
    list<pair<string, long double>> M;
    
    int n = 2;
    M = listingAlg(n);
    
    M.sort(compare_pair);

    list <pair<string, long double>> ::iterator iter;
    for (iter = M.begin(); iter != M.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << "\n";
    }
    
    return 0;
}
