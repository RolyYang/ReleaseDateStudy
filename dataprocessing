#ifndef DataProcessing_h
#define DataProcessing_h

#include <vector>
#include <map>
#include "curl/curl.h"
#include "Stock.h"
#include "Vector.h"

using namespace std;

const int NUM_OF_BATCH = 3;
const int NUM_OF_STOCK = 498;
const string STOCK_FILENAME = "stocks.csv";
const string URL_A = "https://query1.finance.yahoo.com/v7/finance/download/";
const string URL_B = "?period1=";
const string URL_C = "&period2=";
const string URL_D = "&interval=1d&events=history&crumb=";

struct MemoryStruct {
    char *memory;
    size_t size;
};

string now(const char* format = "%c");
void *myrealloc(void *ptr, size_t size);
size_t write_data(void *ptr, size_t size, size_t nmemb, void *data);
string getTimeinSeconds(string Time);
int curlDownload(StockVector &stockList, Map &stockMap, Stock *spy, string &cookie);
void readInStock(vector<StockVector> &group, Stock *spy, int size, const string filename);
void downloadPrice(StockVector *stockList, Map *stockMap, Stock *spy, const int numofgroup);

#endif /* DataProcessing_h */
