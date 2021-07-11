#include <windows.h>
#include <fmt/core.h>
#include "CLI/App.hpp"
#include "CLI/Formatter.hpp"
#include "CLI/Config.hpp"


int main(int argc, char** argv) {
    CLI::App app{ "Smartcard manager" };
    
    std::string get_readers;
    app.add_option("--get_readers", get_readers, "Get readers list");
    
    CLI11_PARSE(app, argc, argv);

    SCARDCONTEXT hSC;
    LONG lReturn;

    lReturn = SCardEstablishContext(SCARD_SCOPE_USER,
                                    NULL,
                                    NULL,
                                    &hSC);
    if ( lReturn != SCARD_S_SUCCESS)
        fmt::print("Failed SCardEstablishContext\n");
    else
    {
        fmt::print("Success SCardEstablishContext\n");
    }

    return 0;
}
