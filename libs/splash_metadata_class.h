#ifndef SPLASH_METADATA_CLASS_H
#define SPLASH_METADATA_CLASS_H

#include <QString>

class splash_metadata{
private:
    QString m_metadata_string = "";
    QString m_contat_name = "";
    QString m_contat_email = "";
    QString m_splash_name = "";
    QString m_splash_desc = "";
    QString m_splash_folder = "";
public:
    splash_metadata() = default;
    void init(QString contat_name,QString contat_email,QString splash_name,QString splash_desc,QString splash_folder = ""){
        m_contat_name = contat_name;
        m_contat_email = contat_email;
        m_splash_name = splash_name;
        m_splash_desc = splash_desc;
        m_splash_folder = splash_folder;
        m_metadata_string = R"rawjson({
            "KPackageStructure": "Plasma/LookAndFeel/Splash",
            "KPlugin": {
                "Authors": [
                    {
                        "Email": "replace_email",
                        "Name": "replace_name"
                    }
                ],
                "Description": "replace_splash_desc",
                "Id": "replace_splash_folder",
                "Name": "replace_splash_name",
                "ServiceTypes": [
                    "Plasma/LookAndFeel"
                ],
                "Version": "1.0"
            },
            "X-Plasma-APIVersion": "2",
            "X-Plasma-MainScript": "defaults"
        })rawjson";
    }

    void set_foldername(QString folder_name){m_splash_folder = folder_name;}

    void make(){
        QString replace = "replace_";
        m_metadata_string.replace(replace+"email",m_contat_email);
        m_metadata_string.replace(replace+"name",m_contat_name);
        m_metadata_string.replace(replace+"splash_name",m_splash_name);
        m_metadata_string.replace(replace+"splash_desc",m_splash_desc);
        m_metadata_string.replace(replace+"splash_folder",m_splash_folder);
    }

    QString get_metadata(){return m_metadata_string;}

};

#endif // SPLASH_METADATA_CLASS_H
