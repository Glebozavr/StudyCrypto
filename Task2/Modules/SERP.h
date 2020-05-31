#pragma once
#include <iostream>
#include <string>
#include <cstdlib>
#include <unistd.h>
#include <fstream>
#include <cryptopp/cryptlib.h>
#include <cryptopp/hex.h>
#include <cryptopp/files.h>
#include <cryptopp/pwdbased.h>
#include <cryptopp/filters.h>
#include <cryptopp/modes.h>
#include <cryptopp/osrng.h>
#include <cryptopp/sha.h>
#include <cryptopp/serpent.h>

using namespace std;
using namespace CryptoPP;

class Serpent_Cryptor
{
private:
  string FileIn;
  string FileOut;
  string psw;

  string salt = "eridogjfv3iwu4oiejfni3co4wiefnjbvieoiwejfnveiorsiefjnveirosiefjnverisgd";
public:
  Serpent_Cryptor() = delete;
  Serpent_Cryptor(const string& Input, const string& Output, const string& Pass);
  bool Serpent_Encrypt ();
  bool Serpent_Decrypt ();
};