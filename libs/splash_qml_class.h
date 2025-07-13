#ifndef SPLASH_QML_CLASS_H
#define SPLASH_QML_CLASS_H

#include <QString>
#include <QVector>

enum QML_TYPE{
    BACKGROUND,
    RECTANGLE,
    IMAGE,
    ANIMATEDIMAGE,
    TEXT,
};

class QML{
private:
    QString m_id = "";
    QString m_anchors = "";
    QString m_color = "";
    QString m_width = "";
    QString m_height = "";
    QString m_source = "";
    QString m_fullsourcepath = "";
    QString m_fillMode = "";
    QString m_text = "";
    QString m_font = "";
    QString m_fontsize = "";
    QVector<QString>m_data;
    QML_TYPE m_type;
    QString m_type_text;
    QString m_x = "0";
    QString m_y = "0";
public:
    QML() = default;
    void qml_start(){
        if(m_type == QML_TYPE::BACKGROUND){
            m_type_text = "Rectangle";
        }
        else if(m_type == QML_TYPE::RECTANGLE){
            m_type_text = "Rectangle";
        }else if(m_type == QML_TYPE::IMAGE){
            m_type_text = "Image";
        }else if(m_type == QML_TYPE::ANIMATEDIMAGE){
            m_type_text = "AnimatedImage";
        }else if(m_type == QML_TYPE::TEXT){
            m_type_text = "Text";
        }
        QString qml_bc = "{\n";
        QString qml_type = m_type_text + qml_bc;
        m_data.push_back(qml_type);
    }

    void qml_end(){
        if(m_type == QML_TYPE::BACKGROUND){
            m_data.push_back("\n");
        }else{
            m_data.push_back("}\n");
        }
    }
    void set_fullsourcepath(QString fullpath){m_fullsourcepath = fullpath;}
    void set_type(QML_TYPE type){m_type = type;}
    void set_id(QString id){m_id = "id:"+id + "\n";m_data.push_back(m_id);}
    void set_anchors(QString anchor){m_anchors = anchor + "\n";m_data.push_back(m_anchors);}
    void set_color(QString color){m_color = "color:\""+color + "\"\n";m_data.push_back(m_color);}
    void set_width(QString width){m_width = "width:"+width + "\n";m_data.push_back(m_width);}
    void set_height(QString height){m_height = "height:"+height + "\n";m_data.push_back(m_height);}
    void set_source(QString filename){m_source = "source:\"images/"+filename+"\"" + "\n";m_data.push_back(m_source);}
    void set_fillMode(QString fillMode){m_fillMode = "fillMode:"+fillMode + "\n";m_data.push_back(m_fillMode);}
    void set_text(QString text){m_text = "text:\""+text+"\"" + "\n";m_data.push_back(m_text);}
    void set_x(QString x){m_x = x + "\n"; m_data.push_back(m_x);}
    void set_y(QString y){m_y = y + "\n"; m_data.push_back(m_y);}
    void set_fontsize(QString size){m_fontsize = "font.pixelSize:"+size+"\n";m_data.push_back(m_fontsize);}
    void set_font(QString font_name){m_font = "font.family:\""+font_name+"\" \n";m_data.push_back(m_font);}
    QML_TYPE get_type(){return m_type;}
    QVector<QString>get_data(){return m_data;}
    QString get_id(){return m_id;}
    QString get_anchors(){return m_anchors;}
    QString get_color(){return m_color;}
    QString get_width(){return m_width;}
    QString get_height(){return m_height;}
    QString get_source(){return m_source;}
    QString get_fullsourcepath(){return m_fullsourcepath;}
    QString get_fillMode(){return m_fillMode;}
    QString get_text(){return m_text;}
    QString get_type_text(){return m_type_text;}
    QString get_x(){return m_x;}
    QString get_y(){return m_y;}
    QString get_fontsize(){return m_fontsize;}
    QString get_font(){return m_font;}
};




#endif // SPLASH_QML_CLASS_H
