#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QDebug>
#include <QTextDocument>
#include <QTextBlock>
#include <QTextBlockFormat>
#include <QTextFrame>
#include <QTextFrameFormat>
#include <QCursor>
#include <QAction>
#include <QFont>
#include <QTextCharFormat>
#include <QTextImageFormat>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QTextDocument* doc = ui->textEdit->document();
    QTextFrame* root_frame = doc->rootFrame();
    QTextFrameFormat format;
    format.setBorderBrush(Qt::red);
    format.setBorder(1);
    root_frame->setFrameFormat(format);

    QTextFrameFormat frameFormat;
    frameFormat.setBackground(Qt::gray);
    frameFormat.setMargin(10);
    frameFormat.setPadding(2);
    frameFormat.setBorder(3);
    frameFormat.setBorderStyle(QTextFrameFormat::BorderStyle_Dashed);

    ui->textEdit->setMinimumSize(400, 400);

    QTextCursor cursor = ui->textEdit->textCursor();
    cursor.insertFrame(frameFormat);
    ui->textEdit->insertPlainText("hello world \n");

    QAction* action = new QAction("frame", this);
    connect(action, &QAction::triggered, this, &MainWindow::showTextFrame);
    ui->toolBar->addAction(action);

    QAction* action_show_block = new QAction("输出文本", this);
    connect(action_show_block, &QAction::triggered, this, &MainWindow::showTextBlock);
    ui->toolBar->addAction(action_show_block);

    QAction* actionFont = new QAction("字体", this);
    actionFont->setCheckable(true);
    connect(actionFont, &QAction::toggled, this, &MainWindow::setFont);
    ui->toolBar->addAction(actionFont);

    QAction* actionImage = new QAction("图片", this);
    actionImage->setCheckable(true);
    connect(actionImage, &QAction::triggered, this, &MainWindow::setImage);
    ui->toolBar->addAction(actionImage);
}
MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::showTextFrame()
{
    QTextDocument* doc = ui->textEdit->document();
    QTextFrame* rootFrame = doc->rootFrame();
    for (auto iter = rootFrame->begin(); iter != rootFrame->end(); ++ iter) {
        auto cur_frame = iter.currentFrame();
        auto cur_block = iter.currentBlock();
        if (cur_frame) {
            qDebug() << "cur node is frame" << Qt::endl;
        } else if (cur_block.isValid()) {
            qDebug() << "cur node is block , text is " << cur_block.text() << Qt::endl;
        }
    }
}

void MainWindow::showTextBlock()
{
    QTextDocument* doc = ui->textEdit->document();
    QTextBlock block = doc->firstBlock();
    for(int i = 0; i < doc->blockCount(); ++i)
    {
        qDebug() << tr("文本块%1, 文本块首行行号%2, 长度%3, 内容%4").arg(i).arg(block.firstLineNumber()).arg(block.length()).arg(block.text());
        block = block.next();
    }
}

void MainWindow::setFont(bool checked)
{
    if (checked)
    {
        QTextCursor cursor = ui->textEdit->textCursor();
        QTextCharFormat charFormat;
        charFormat.setBackground(Qt::red);
        charFormat.setForeground(Qt::blue);
        charFormat.setFont(QFont("微软雅黑", 12, QFont::Bold, true));
        charFormat.setFontUnderline(true);
        cursor.setCharFormat(charFormat);
        cursor.insertText("hello world");
    }
    else
    {
        QTextCursor cursor = ui->textEdit->textCursor();
        QTextCharFormat charFormat;
//        charFormat.setBackground(Qt::red);
//        charFormat.setForeground(Qt::blue);
//        charFormat.setFont(QFont("微软雅黑", 12, QFont::Bold, true));
//        charFormat.setFontUnderline(true);
        cursor.setCharFormat(charFormat);
        cursor.insertText("hello world");
    }
}

void MainWindow::setImage()
{
    QTextImageFormat img;
    img.setName("qrc:/image/qqImage.jpeg");
    img.setHeight(200);
    img.setHeight(200);
    ui->textEdit->textCursor().insertImage(img);

}
