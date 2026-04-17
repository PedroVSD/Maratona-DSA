#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target);

int main(void){

}

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> map;

    int i = 0;
    for(int number : nums){
        map[number] = i++;
    }

    for(int j = 0; j < nums.size(); j++){
        int numero_atual = nums[j];

        auto encontra_atual = map.find(numero_atual);
        if(encontra_atual != map.end()){
            return {encontra_atual -> second, j};
        }
        map[target - numero_atual] = j;
    }
    return {};
}












/*#include <stdio.h>
#include <stdlib.h>

int* somadois(int *v, int n, int x) {
    int i, j;
    int *res = (int*)malloc(2 * sizeof(int));
    if (res == NULL) {
        return NULL;
    }

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (v[i] + v[j] == x) {
                res[0] = i;
                res[1] = j;
                return res;
            }
        }
    }
    
    free(res);
    return NULL;
}

int main() {
    int v[] = {2, 7, 11, 15};
    int n = 4;
    int x = 9;
    int *posicoes = somadois(v, n, x);

    if (posicoes != NULL) {
        printf("Soma encontrada nas posições: %d e %d\n", posicoes[0], posicoes[1]);
        printf("Soma encontrada: %d + %d = %d\n", v[posicoes[0]], v[posicoes[1]], x);
        free(posicoes);
    } else {
        printf("Soma nao encontrada\n");
    }
    
    return 0;
}*/
