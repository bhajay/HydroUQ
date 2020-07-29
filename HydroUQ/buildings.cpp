/*********************************************************************************
**
** Copyright (c) 2020 University of California, Berkeley
**
** Redistribution and use in source and binary forms, with or without modification,
** are permitted provided that the following conditions are met:
**
** 1. Redistributions of source code must retain the above copyright notice, this
** list of conditions and the following disclaimer.
**
** 2. Redistributions in binary form must reproduce the above copyright notice, this
** list of conditions and the following disclaimer in the documentation and/or other
** materials provided with the distribution.
**
** 3. Neither the name of the copyright holder nor the names of its contributors may
** be used to endorse or promote products derived from this software without specific
** prior written permission.
**
** THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY
** EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
** OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT
** SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
** INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED
** TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
** BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
** CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
** IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
** SUCH DAMAGE.
**
***********************************************************************************/

// Contributors:
// Ajay B Harish, Post-Doc @ SimCenter, UC Berkeley
// Dr. Frank McKenna, CTO of SimCenter, UC Berkeley
// Prof. Sanjay Govindjee, Director of SimCenter, UC Berkeley

//*********************************************************************************
// Include user headers
//*********************************************************************************
#include "mainwindow.h"
#include "ui_mainwindow.h"

//*********************************************************************************
// For widgets related to that where buildings
//*********************************************************************************

//*********************************************************************************
// Button to add buildings
//*********************************************************************************
void MainWindow::on_Btn_DA_AddBuild_clicked()
{
    //ui->Tbl_DA_Building->insertRow(ui->Tbl_DA_Building->rowCount());
    //ui->Tb
}

//*********************************************************************************
// Button to remove buildings
//*********************************************************************************
void MainWindow::on_Btn_DA_RemBuild_clicked()
{

}

//*********************************************************************************
// Which elements to show and hide in buildings tab
//*********************************************************************************
void MainWindow::buildinghideshow()
{

    if( ((ui->CmB_AA_SimType->currentIndex() == 1) || (ui->CmB_AA_SimType->currentIndex() == 2)) ||
            ((ui->CmB_AA_SimType->currentIndex() == 3) || (ui->CmB_AA_SimType->currentIndex() == 4)) )
    {
        ui->Lbl_DA_Notice->hide();
        ui->Lbl_DA_Building->show();
        ui->Tbl_DA_Building->show();
        ui->Btn_DA_AddBuild->show();
        ui->Btn_DA_RemBuild->show();
    }
    else if((ui->CmB_AA_SimType->currentIndex() == 5) || (ui->CmB_AA_SimType->currentIndex() == 6))
    {
        ui->Lbl_DA_Notice->setText("This option will be coming soon. Keep yourself \nupdated");
        ui->Lbl_DA_Notice->show();
        ui->Lbl_DA_Building->hide();
        ui->Tbl_DA_Building->hide();
        ui->Btn_DA_AddBuild->hide();
        ui->Btn_DA_RemBuild->hide();
    }
    else if(ui->CmB_AA_SimType->currentIndex() == 7)
    {
        ui->Lbl_DA_Notice->setText("This option is coming soon in the beta version. \nWatch out!");
        ui->Lbl_DA_Notice->show();
        ui->Lbl_DA_Building->hide();
        ui->Tbl_DA_Building->hide();
        ui->Btn_DA_AddBuild->hide();
        ui->Btn_DA_RemBuild->hide();
    }

}

