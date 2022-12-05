#include "DatabaseAccess.h" 

using namespace Composants;

DatabaseAccess::DatabaseAccess()
{
    this->sqlRequest = "RIEN";

    this->connectionInformation = "Data Source=DESKTOP-K75N7D0\\MSSQL_CESI;" +
        "Initial Catalog=CESI_BDD;" +
        "Persist Security Info=True;" +
        "User ID=cesi;" +
        "Password=azerty;";

    this->sqlConnection = gcnew SqlConnection(this->connectionInformation);
    this->sqlCommand = gcnew SqlCommand(this->sqlRequest, this->sqlConnection);
    this->sqlCommand->CommandType = CommandType::Text;
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