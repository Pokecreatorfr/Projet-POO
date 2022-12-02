#include "Connection.h"

using namespace BDD;

BDD::Connection::Connection(void)
{
	this->sqlRequest = "RIEN";

	this->connectionInformation = "Data Source = DESKTOP-N3PF2FH\\TANG_SQL;Initial Catalog = user5 ;User ID = user5 ; Password=bonjour";


	this->sqlConnection = gcnew SqlConnection(this->connectionInformation);
	this->sqlCommand = gcnew SqlCommand(this->sqlRequest, this->sqlConnection);
	this->sqlCommand->CommandType = CommandType::Text;
}

int Connection::actionRowsID(String^ request)
{
    int id;
    this->setSQL(request);
    this->sqlCommand->CommandText = this->sqlRequest;
    this->sqlConnection->Open();
    id = Convert::ToInt32(this->sqlCommand->ExecuteScalar());
    this->sqlConnection->Close();
    return id;
}

void Connection::actionRows(String^ request)
{
    this->setSQL(request);
    this->sqlCommand->CommandText = this->sqlRequest;
    this->sqlConnection->Open();
    this->sqlCommand->ExecuteNonQuery();
    this->sqlConnection->Close();
}

DataSet^ Connection::getRows(String^ request, String^ dataTableName)
{
    this->setSQL(request);
    this->sqlAdapter = gcnew SqlDataAdapter(this->sqlCommand);
    this->sqlCommand->CommandText = this->sqlRequest;
    this->dataSet = gcnew DataSet();
    this->sqlAdapter->Fill(this->dataSet, dataTableName);
    return this->dataSet;
}

void Connection::setSQL(String^ request)
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