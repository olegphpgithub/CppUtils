#pragma once

class Version
{
public:
    Version(LPCTSTR lptszVersion);
    void setVersion(LPCTSTR lptszVersion);
    friend bool operator<(const Version &leftVersion, const Version &rightVersion);
    friend bool operator>(const Version &leftVersion, const Version &rightVersion);
    int major, minor, revision, build;
};
