#include "DatabaseAccess.h" 

using namespace Composants;

DatabaseAccess::DatabaseAccess(String ^ Data_Source , String^ Initial_Catalog , String^ User_ID , String^ Password)
{
    this->sqlRequest = "RIEN";

    this->connectionInformation = "Data Source =" + Data_Source + "; Initial Catalog ="+ Initial_Catalog +"; User ID ="+ User_ID +"; Password = " + Password;

    this->sqlConnection = gcnew SqlConnection(this->connectionInformation);
    this->sqlCommand = gcnew SqlCommand(this->sqlRequest, this->sqlConnection);
    this->sqlCommand->CommandType = CommandType::Text;
    this->sqlConnection->Open();
    this->sqlConnection->Close();
}

int DatabaseAccess::actionRowsID(String^ request)
{
    int id;
    this->setSQL(request);
    this->sqlCommand->CommandText = this->sqlRequest;
    this->sqlConnection->Open();
    id = Convert::ToInt32(this->sqlCommand->ExecuteScalar());
    this->sqlConnection->Close();
    return id;
}

void DatabaseAccess::actionRows(String^ request)
{
    this->setSQL(request);
    this->sqlCommand->CommandText = this->sqlRequest;
    this->sqlConnection->Open();
    this->sqlCommand->ExecuteNonQuery();
    this->sqlConnection->Close();
}

DataSet^ DatabaseAccess::getRows(String^ request, String^ dataTableName)
{
    this->setSQL(request);
    this->sqlAdapter = gcnew SqlDataAdapter(this->sqlCommand);
    this->sqlCommand->CommandText = this->sqlRequest;
    this->dataSet = gcnew DataSet();
    this->sqlAdapter->Fill(this->dataSet, dataTableName);
    return this->dataSet;
}

void DatabaseAccess::setSQL(String^ request)
{
    if (String::IsNullOrEmpty(request) || request == "RIEN")
    {
        this->sqlRequest = "RIEN";
    }
    else
    {
        this->sqlRequest = request;
    }
}