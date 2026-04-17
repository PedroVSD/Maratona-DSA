"""
Cache e arrays
Localidade temporal e espacial, tamanho -> ordenação

Mapas de frequência: Contar a frequência de uma string -> hash map
anagramas, palindromo, compressão, criptografia, sligin window
"""
def frequency_map(s: str) -> dict:
    freq = {}
    for ch in s:
        if ch in freq:
            freq[ch] += 1
        else:
            freq[ch] = 1
    return freq

freq = frequency_map("Jesus")
print(freq)