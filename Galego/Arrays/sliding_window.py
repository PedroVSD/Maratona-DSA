# Subarray, tamanho de sub array, substring ou tamanho de substring que preenche certa condição
# Um while para controlar o ponteiro da direita e outro para controlar o ponteiro da esquerda, contraindo e expande a janela
# Usar o hashmap para contabilizar o número de vezes que certa letra ou o que procuramos aparece
# Get retorna o valor da chave, e None caso não exista
# O s[right] pega a letra na posição right da string e o count_letter usa essa posição como chave para o hash
# letra = s[right]           ex: "a"
# count_letter[letra] += 1   count_letter["a"] += 1
#
#
class Solution:
    def maximumLengthSubstring(self, s: str) -> int:
        count_letter = {}
        left = 0
        right = 0
        max_value = 1

        count_letter[0] = 1

        for right in range(len(s)):
            if count_letter.get(s[right]):
                count_letter[s[right]] += 1
            else:
                count_letter[s[right]] = 1

            while count_letter[s[right]] == 3:
                count_letter[s[left]] -= 1
                left += 1
            max_value = max(max_value, right - left + 1)

        return max_value
