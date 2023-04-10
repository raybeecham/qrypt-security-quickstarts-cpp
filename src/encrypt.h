#ifndef ENCRYPT_H
#define ENCRYPT_H

#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>

void encryptDecrypt(std::string operation,
                    std::istream& ciphertext_in, std::istream& key_in, std::ostream& output,
                    std::string file_type = "binary", std::string aes_mode = "ocb", std::string key_type = "otp");

std::vector<uint8_t> encryptAES256ECB(const std::vector<uint8_t> aesKey, const std::vector<uint8_t> &data);
std::vector<uint8_t> decryptAES256ECB(const std::vector<uint8_t> aesKey, const std::vector<uint8_t> &data);
std::vector<uint8_t> encryptAES256OCB(const std::vector<uint8_t> aesKey, const std::vector<uint8_t> &data);
std::vector<uint8_t> decryptAES256OCB(const std::vector<uint8_t> aesKey, const std::vector<uint8_t> &data);

#endif /* ENCRYPT_H */