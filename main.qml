import QtQuick
import QtQuick.Controls
import QtQuick.Controls.Material
import QtQuick.Controls.Imagine

Window {
    id: mainWindow
    width: 800
    height: 700
    visible: true

    title: qsTr("Iot test application")
    Material.theme: Material.Dark
    Material.accent: Material.Red
    Material.primary: Material.Blue

/*
    Page{
        id: page
        anchors.fill: parent

        ListView{
            id: listView
            anchors.fill: parent
            model: ["aaa", "bbb", "ccc", "ddd", "eeeee", "fffff"]
            spacing: -15
            delegate: PaddedRectangle {
                height: 60
                width: ListView.view.width
                color: "lightgray"
                border.color: "black"
                Text {
                    anchors.centerIn: parent
                    text: modelData
                }
            }
        }
    }
*/
    Rectangle{
        id: rectRadio1
        width: 100
        height: 100
        x: 50
        y: 100
        color: "green"
        Text {
            id: iotTextRadio1
            text: qsTr("Radio 1")
            font.pointSize: 14
        }
    }

    Rectangle{
        id: rectRadio2
        width: 100
        height: 100
        x: 50
        y: 250
        color: "yellow"
        Text {
            id: iotTextRadio2
            text: qsTr("Radio 2")
            font.pointSize: 14
        }
    }

    Button{
        id: iotNet
        x: 500
        y: 100
        width: 100
        height: 100
        font.pointSize: 14
        text: qsTr("IotNet")
        Button{
            onClicked:{




            }
        }
    }

    Button{
        id: exitBtn
        x: 450
        y: 560
        width: 120
        height: 80
        icon.source: "qrc:/iot.png"

        font.pointSize: 14
        text: qsTr("Закрыть")
        Button{
            onClicked: {
                close();
            }
        }
    }
}
