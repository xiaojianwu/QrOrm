#ifndef QRCREATESQL_H
#define QRCREATESQL_H

#include "generator/qrsqlgenerator.h"

NS_QRORM_BEGIN

/*!
 * \brief PRIMARY KEY was setting by QrSqlTable::pkIdName(), it would be auto increment
 */
class QRORMSHARED_EXPORT QrCreateSql : public QrSqlGenerator
{
public:
    virtual ~QrCreateSql() = default;

    // QrSqlGenerator interface
protected:
    virtual QString getSqlStatement() ;

private:
    QString getVariantType(const QVariant &variant) const;
};

NS_QRORM_END

#endif // QRCREATESQL_H
