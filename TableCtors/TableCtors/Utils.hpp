#pragma once

namespace flags
{
constexpr bool printFlagOn = true;
}

namespace defaultVals
{
constexpr const char* INDENT = "   ";
constexpr const char* SEPARATOR = ": ";
constexpr const char* DEFAULT_TABLE_NAME = "KORYTKO_TABLE";
constexpr const char* POST_COPIED_NAME = "_copy";
constexpr const char* DTOR_PRE_PRINT = "usuwam: ";
constexpr const char* CTOR_COPY_PRE_PRINT = "kopiuj: ";
constexpr const char* CTOR_DEFAULT_PRE_PRINT = "bezp: ";
constexpr const char* CTOR_ARG1_PRE_PRINT = "parametr: ";
constexpr const char* POST_PRINT = "\n";
constexpr int INITIAL_FLYWEIGHT_CACHE_SIZE = 5;
constexpr int ZERO = 0;
constexpr int FIVE = 5;
constexpr int DEFAULT_IN_TABLE_SIZE = 3;
constexpr const char* string999 = "999";
}

namespace idxOf
{
constexpr int command = 0;
constexpr int idOrAmmount = 1;
}

namespace messageLiterals
{
constexpr char* get = "get"; // pre for all get
constexpr char* createDef = "createDef"; // calls default ctor for obj with number 
constexpr char* createDefs = "createDefs"; // calls default ctor for number of obj
constexpr char* getName = "getName"; // getName of CTable on idx
constexpr char* getSize = "getSize"; // getSize of CTable on idx
constexpr char* remove = "remove"; // remove CTable on idx
constexpr char* removeAll = "removeAll"; // remove CTable on idx
                                           //createDef <nrTablicy> -wywo�uje domy�lny konstruktor obiektu o podanym numerze.
//create <nrTablicy> <rozmiar> <nazwaTablicy> -wywo�uje parametryczny kontruktor
//
//createCopy <nrTablicy> <nrTablicyDoKopiowania> -wywo�uje kontruktor kopiuj�cy
//
//setValue <nrTablicy> <nrPozycji> <warto��>
//
//getValue <nrTablicy> <nrPozycji>
//
//setName <nrTablicy> <nazwaTablicy>
//
//getName <nrTablicy>
}



