#ifndef _CONFIGURATION_H_
#define _CONFIGURATION_H_

#include <string>

namespace runexe
{
    const int RUN_EXIT_FAILURE = 2147483647;
    const std::string version = "0.0.15";
    const std::string copyrightYears = "2009-2012";

    const bool RETURN_EXIT_CODE = false;
    const bool SCREEN_OUTPUT = true;
    const bool XML_OUTPUT = false;
    const bool SHOW_KERNEL_MODE_TIME = false;
    const std::string STATISTICS_FILE_NAME = "";
    const std::string XML_FILE_NAME = "";

    class Configuration
    {
    public:
        static Configuration& getConfiguration();
        ~Configuration();

        bool isReturnExitCode() const;
        void setReturnExitCode(bool isReturnExitCode);

        bool isScreenOutput() const;
        void setScreenOutput(bool isScreenOutput);

        bool isXmlOutput() const;
        void setXmlOutput(bool isXmlOutput);

        bool isShowKernelModeTime() const;
        void setShowKernelModeTime(bool showKernelModeTime);

        std::string getStatisticsFileName() const;
        void setStatisticsFileName(const std::string& statisticsFileName);

        std::string getXmlFileName() const;
        void setXmlFileName(const std::string& xmlFileName);

    private:
        Configuration();
        Configuration(const Configuration& configuration);
        Configuration& operator =(const Configuration& configuration);        

        bool returnExitCode;
        bool screenOutput;
        bool xmlOutput;
        bool showKernelModeTime;
        std::string statisticsFileName;
        std::string xmlFileName;

        void setDefaults();
    };
}

#endif
