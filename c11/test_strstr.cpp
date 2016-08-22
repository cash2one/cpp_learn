#include <string.h>
#include <iostream>

int main() {
    char *map_file = "hdfs://yq01-wutai-hdfs.dmop.baidu.com:54310/app/ecom/cm/online_train_data/test/wyx/LUCTRMidPage/train_data/0/fea/20160801/0000/part-00048-G.gz";
    char *mark = "/app/ecom/cm/online_train_data/test/wyx/LUCTRMidPage//train_data/0/fea/20160801/0000/";
    if (NULL != strstr(map_file, mark)) {
        std::cout << "find mark\n";
    } else {
        std::cout << "not find mark\n";
    }

    return 0;
}
