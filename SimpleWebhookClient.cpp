# include <Siv3D.hpp>

void Main()
{
    // http://sample.jp/data.jsonにdata.jsonがあると仮定
    const String URL = L"http://sample.jp/data.json";

    HTTPClient httpClient;
    ByteArray byteArray;
    

    httpClient.download(URL, byteArray);
    //httpClient.download(URL, L"result.json");

    JSONReader reader(std::move(byteArray));
    //JSONReader reader(L"result.json");

    Println(reader.root()[1][L"id"].get<String>());
    Println(reader.root()[1][L"name"].get<String>());
    Println(reader.root()[1][L"message"].get<String>());
    Println(reader.root()[1][L"date"].get<String>());

    WaitKey();
}
