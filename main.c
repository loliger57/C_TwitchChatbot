#include <stdio.h>
#include "curl/curl.h"

    int main(void)
    {
        CURL *curl;
        CURLcode res;

        curl = curl_easy_init();
        if(curl) {
            curl_easy_setopt(curl, CURLOPT_URL, "https://irc.chat.twitch.tv:6667");
            curl_easy_setopt(curl, CURLOPT_WRITEDATA, stdout);
            curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, fwrite);

            const char *oauth = "f2m80b0t3njjsoorpymlpasi1hq492";
            const char *nick = "lolis__bot";
            const char *channel = "#loliger57";

            fprintf(stdout, "PASS %s\r\n", oauth);
            fprintf(stdout, "NICK %s\r\n", nick);
            fprintf(stdout, "JOIN %s\r\n", channel);
            fflush(stdout);

            char buffer[4096];
            while(fgets(buffer, 4096, stdin)) {
                fprintf(curl, "PRIVMSG %s :%s\r\n", channel, buffer);
                fflush(stdout);
            }

            curl_easy_cleanup(curl);
        }

        return 0;
    }

