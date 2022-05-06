/**
 *
 *  Staff.cc
 *  DO NOT EDIT. This file is generated by drogon_ctl
 *
 */

#include "Staff.h"
#include <drogon/utils/Utilities.h>
#include <string>

using namespace drogon;
using namespace drogon::orm;
using namespace drogon_model::sqlite3;

const std::string Staff::Cols::_id = "id";
const std::string Staff::Cols::_staff_id = "staff_id";
const std::string Staff::Cols::_name = "name";
const std::string Staff::Cols::_file_path = "file_path";
const std::string Staff::Cols::_update_time = "update_time";
const std::string Staff::primaryKeyName = "id";
const bool Staff::hasPrimaryKey = true;
const std::string Staff::tableName = "staff";

const std::vector<typename Staff::MetaData> Staff::metaData_={
{"id","uint64_t","integer",8,1,1,1},
{"staff_id","std::string","text",0,0,0,1},
{"name","std::string","text",0,0,0,1},
{"file_path","std::string","text",0,0,0,1},
{"update_time","std::string","text",0,0,0,0}
};
const std::string &Staff::getColumnName(size_t index) noexcept(false)
{
    assert(index < metaData_.size());
    return metaData_[index].colName_;
}
Staff::Staff(const Row &r, const ssize_t indexOffset) noexcept
{
    if(indexOffset < 0)
    {
        if(!r["id"].isNull())
        {
            id_=std::make_shared<uint64_t>(r["id"].as<uint64_t>());
        }
        if(!r["staff_id"].isNull())
        {
            staffId_=std::make_shared<std::string>(r["staff_id"].as<std::string>());
        }
        if(!r["name"].isNull())
        {
            name_=std::make_shared<std::string>(r["name"].as<std::string>());
        }
        if(!r["file_path"].isNull())
        {
            filePath_=std::make_shared<std::string>(r["file_path"].as<std::string>());
        }
        if(!r["update_time"].isNull())
        {
            updateTime_=std::make_shared<std::string>(r["update_time"].as<std::string>());
        }
    }
    else
    {
        size_t offset = (size_t)indexOffset;
        if(offset + 5 > r.size())
        {
            LOG_FATAL << "Invalid SQL result for this model";
            return;
        }
        size_t index;
        index = offset + 0;
        if(!r[index].isNull())
        {
            id_=std::make_shared<uint64_t>(r[index].as<uint64_t>());
        }
        index = offset + 1;
        if(!r[index].isNull())
        {
            staffId_=std::make_shared<std::string>(r[index].as<std::string>());
        }
        index = offset + 2;
        if(!r[index].isNull())
        {
            name_=std::make_shared<std::string>(r[index].as<std::string>());
        }
        index = offset + 3;
        if(!r[index].isNull())
        {
            filePath_=std::make_shared<std::string>(r[index].as<std::string>());
        }
        index = offset + 4;
        if(!r[index].isNull())
        {
            updateTime_=std::make_shared<std::string>(r[index].as<std::string>());
        }
    }

}

Staff::Staff(const Json::Value &pJson, const std::vector<std::string> &pMasqueradingVector) noexcept(false)
{
    if(pMasqueradingVector.size() != 5)
    {
        LOG_ERROR << "Bad masquerading vector";
        return;
    }
    if(!pMasqueradingVector[0].empty() && pJson.isMember(pMasqueradingVector[0]))
    {
        dirtyFlag_[0] = true;
        if(!pJson[pMasqueradingVector[0]].isNull())
        {
            id_=std::make_shared<uint64_t>((uint64_t)pJson[pMasqueradingVector[0]].asUInt64());
        }
    }
    if(!pMasqueradingVector[1].empty() && pJson.isMember(pMasqueradingVector[1]))
    {
        dirtyFlag_[1] = true;
        if(!pJson[pMasqueradingVector[1]].isNull())
        {
            staffId_=std::make_shared<std::string>(pJson[pMasqueradingVector[1]].asString());
        }
    }
    if(!pMasqueradingVector[2].empty() && pJson.isMember(pMasqueradingVector[2]))
    {
        dirtyFlag_[2] = true;
        if(!pJson[pMasqueradingVector[2]].isNull())
        {
            name_=std::make_shared<std::string>(pJson[pMasqueradingVector[2]].asString());
        }
    }
    if(!pMasqueradingVector[3].empty() && pJson.isMember(pMasqueradingVector[3]))
    {
        dirtyFlag_[3] = true;
        if(!pJson[pMasqueradingVector[3]].isNull())
        {
            filePath_=std::make_shared<std::string>(pJson[pMasqueradingVector[3]].asString());
        }
    }
    if(!pMasqueradingVector[4].empty() && pJson.isMember(pMasqueradingVector[4]))
    {
        dirtyFlag_[4] = true;
        if(!pJson[pMasqueradingVector[4]].isNull())
        {
            updateTime_=std::make_shared<std::string>(pJson[pMasqueradingVector[4]].asString());
        }
    }
}

Staff::Staff(const Json::Value &pJson) noexcept(false)
{
    if(pJson.isMember("id"))
    {
        dirtyFlag_[0]=true;
        if(!pJson["id"].isNull())
        {
            id_=std::make_shared<uint64_t>((uint64_t)pJson["id"].asUInt64());
        }
    }
    if(pJson.isMember("staff_id"))
    {
        dirtyFlag_[1]=true;
        if(!pJson["staff_id"].isNull())
        {
            staffId_=std::make_shared<std::string>(pJson["staff_id"].asString());
        }
    }
    if(pJson.isMember("name"))
    {
        dirtyFlag_[2]=true;
        if(!pJson["name"].isNull())
        {
            name_=std::make_shared<std::string>(pJson["name"].asString());
        }
    }
    if(pJson.isMember("file_path"))
    {
        dirtyFlag_[3]=true;
        if(!pJson["file_path"].isNull())
        {
            filePath_=std::make_shared<std::string>(pJson["file_path"].asString());
        }
    }
    if(pJson.isMember("update_time"))
    {
        dirtyFlag_[4]=true;
        if(!pJson["update_time"].isNull())
        {
            updateTime_=std::make_shared<std::string>(pJson["update_time"].asString());
        }
    }
}

void Staff::updateByMasqueradedJson(const Json::Value &pJson,
                                            const std::vector<std::string> &pMasqueradingVector) noexcept(false)
{
    if(pMasqueradingVector.size() != 5)
    {
        LOG_ERROR << "Bad masquerading vector";
        return;
    }
    if(!pMasqueradingVector[0].empty() && pJson.isMember(pMasqueradingVector[0]))
    {
        if(!pJson[pMasqueradingVector[0]].isNull())
        {
            id_=std::make_shared<uint64_t>((uint64_t)pJson[pMasqueradingVector[0]].asUInt64());
        }
    }
    if(!pMasqueradingVector[1].empty() && pJson.isMember(pMasqueradingVector[1]))
    {
        dirtyFlag_[1] = true;
        if(!pJson[pMasqueradingVector[1]].isNull())
        {
            staffId_=std::make_shared<std::string>(pJson[pMasqueradingVector[1]].asString());
        }
    }
    if(!pMasqueradingVector[2].empty() && pJson.isMember(pMasqueradingVector[2]))
    {
        dirtyFlag_[2] = true;
        if(!pJson[pMasqueradingVector[2]].isNull())
        {
            name_=std::make_shared<std::string>(pJson[pMasqueradingVector[2]].asString());
        }
    }
    if(!pMasqueradingVector[3].empty() && pJson.isMember(pMasqueradingVector[3]))
    {
        dirtyFlag_[3] = true;
        if(!pJson[pMasqueradingVector[3]].isNull())
        {
            filePath_=std::make_shared<std::string>(pJson[pMasqueradingVector[3]].asString());
        }
    }
    if(!pMasqueradingVector[4].empty() && pJson.isMember(pMasqueradingVector[4]))
    {
        dirtyFlag_[4] = true;
        if(!pJson[pMasqueradingVector[4]].isNull())
        {
            updateTime_=std::make_shared<std::string>(pJson[pMasqueradingVector[4]].asString());
        }
    }
}

void Staff::updateByJson(const Json::Value &pJson) noexcept(false)
{
    if(pJson.isMember("id"))
    {
        if(!pJson["id"].isNull())
        {
            id_=std::make_shared<uint64_t>((uint64_t)pJson["id"].asUInt64());
        }
    }
    if(pJson.isMember("staff_id"))
    {
        dirtyFlag_[1] = true;
        if(!pJson["staff_id"].isNull())
        {
            staffId_=std::make_shared<std::string>(pJson["staff_id"].asString());
        }
    }
    if(pJson.isMember("name"))
    {
        dirtyFlag_[2] = true;
        if(!pJson["name"].isNull())
        {
            name_=std::make_shared<std::string>(pJson["name"].asString());
        }
    }
    if(pJson.isMember("file_path"))
    {
        dirtyFlag_[3] = true;
        if(!pJson["file_path"].isNull())
        {
            filePath_=std::make_shared<std::string>(pJson["file_path"].asString());
        }
    }
    if(pJson.isMember("update_time"))
    {
        dirtyFlag_[4] = true;
        if(!pJson["update_time"].isNull())
        {
            updateTime_=std::make_shared<std::string>(pJson["update_time"].asString());
        }
    }
}

const uint64_t &Staff::getValueOfId() const noexcept
{
    const static uint64_t defaultValue = uint64_t();
    if(id_)
        return *id_;
    return defaultValue;
}
const std::shared_ptr<uint64_t> &Staff::getId() const noexcept
{
    return id_;
}
void Staff::setId(const uint64_t &pId) noexcept
{
    id_ = std::make_shared<uint64_t>(pId);
    dirtyFlag_[0] = true;
}
const typename Staff::PrimaryKeyType & Staff::getPrimaryKey() const
{
    assert(id_);
    return *id_;
}

const std::string &Staff::getValueOfStaffId() const noexcept
{
    const static std::string defaultValue = std::string();
    if(staffId_)
        return *staffId_;
    return defaultValue;
}
const std::shared_ptr<std::string> &Staff::getStaffId() const noexcept
{
    return staffId_;
}
void Staff::setStaffId(const std::string &pStaffId) noexcept
{
    staffId_ = std::make_shared<std::string>(pStaffId);
    dirtyFlag_[1] = true;
}
void Staff::setStaffId(std::string &&pStaffId) noexcept
{
    staffId_ = std::make_shared<std::string>(std::move(pStaffId));
    dirtyFlag_[1] = true;
}

const std::string &Staff::getValueOfName() const noexcept
{
    const static std::string defaultValue = std::string();
    if(name_)
        return *name_;
    return defaultValue;
}
const std::shared_ptr<std::string> &Staff::getName() const noexcept
{
    return name_;
}
void Staff::setName(const std::string &pName) noexcept
{
    name_ = std::make_shared<std::string>(pName);
    dirtyFlag_[2] = true;
}
void Staff::setName(std::string &&pName) noexcept
{
    name_ = std::make_shared<std::string>(std::move(pName));
    dirtyFlag_[2] = true;
}

const std::string &Staff::getValueOfFilePath() const noexcept
{
    const static std::string defaultValue = std::string();
    if(filePath_)
        return *filePath_;
    return defaultValue;
}
const std::shared_ptr<std::string> &Staff::getFilePath() const noexcept
{
    return filePath_;
}
void Staff::setFilePath(const std::string &pFilePath) noexcept
{
    filePath_ = std::make_shared<std::string>(pFilePath);
    dirtyFlag_[3] = true;
}
void Staff::setFilePath(std::string &&pFilePath) noexcept
{
    filePath_ = std::make_shared<std::string>(std::move(pFilePath));
    dirtyFlag_[3] = true;
}

const std::string &Staff::getValueOfUpdateTime() const noexcept
{
    const static std::string defaultValue = std::string();
    if(updateTime_)
        return *updateTime_;
    return defaultValue;
}
const std::shared_ptr<std::string> &Staff::getUpdateTime() const noexcept
{
    return updateTime_;
}
void Staff::setUpdateTime(const std::string &pUpdateTime) noexcept
{
    updateTime_ = std::make_shared<std::string>(pUpdateTime);
    dirtyFlag_[4] = true;
}
void Staff::setUpdateTime(std::string &&pUpdateTime) noexcept
{
    updateTime_ = std::make_shared<std::string>(std::move(pUpdateTime));
    dirtyFlag_[4] = true;
}
void Staff::setUpdateTimeToNull() noexcept
{
    updateTime_.reset();
    dirtyFlag_[4] = true;
}

void Staff::updateId(const uint64_t id)
{
    id_ = std::make_shared<uint64_t>(id);
}

const std::vector<std::string> &Staff::insertColumns() noexcept
{
    static const std::vector<std::string> inCols={
        "staff_id",
        "name",
        "file_path",
        "update_time"
    };
    return inCols;
}

void Staff::outputArgs(drogon::orm::internal::SqlBinder &binder) const
{
    if(dirtyFlag_[1])
    {
        if(getStaffId())
        {
            binder << getValueOfStaffId();
        }
        else
        {
            binder << nullptr;
        }
    }
    if(dirtyFlag_[2])
    {
        if(getName())
        {
            binder << getValueOfName();
        }
        else
        {
            binder << nullptr;
        }
    }
    if(dirtyFlag_[3])
    {
        if(getFilePath())
        {
            binder << getValueOfFilePath();
        }
        else
        {
            binder << nullptr;
        }
    }
    if(dirtyFlag_[4])
    {
        if(getUpdateTime())
        {
            binder << getValueOfUpdateTime();
        }
        else
        {
            binder << nullptr;
        }
    }
}

const std::vector<std::string> Staff::updateColumns() const
{
    std::vector<std::string> ret;
    if(dirtyFlag_[1])
    {
        ret.push_back(getColumnName(1));
    }
    if(dirtyFlag_[2])
    {
        ret.push_back(getColumnName(2));
    }
    if(dirtyFlag_[3])
    {
        ret.push_back(getColumnName(3));
    }
    if(dirtyFlag_[4])
    {
        ret.push_back(getColumnName(4));
    }
    return ret;
}

void Staff::updateArgs(drogon::orm::internal::SqlBinder &binder) const
{
    if(dirtyFlag_[1])
    {
        if(getStaffId())
        {
            binder << getValueOfStaffId();
        }
        else
        {
            binder << nullptr;
        }
    }
    if(dirtyFlag_[2])
    {
        if(getName())
        {
            binder << getValueOfName();
        }
        else
        {
            binder << nullptr;
        }
    }
    if(dirtyFlag_[3])
    {
        if(getFilePath())
        {
            binder << getValueOfFilePath();
        }
        else
        {
            binder << nullptr;
        }
    }
    if(dirtyFlag_[4])
    {
        if(getUpdateTime())
        {
            binder << getValueOfUpdateTime();
        }
        else
        {
            binder << nullptr;
        }
    }
}
Json::Value Staff::toJson() const
{
    Json::Value ret;
    if(getId())
    {
        ret["id"]=(Json::UInt64)getValueOfId();
    }
    else
    {
        ret["id"]=Json::Value();
    }
    if(getStaffId())
    {
        ret["staff_id"]=getValueOfStaffId();
    }
    else
    {
        ret["staff_id"]=Json::Value();
    }
    if(getName())
    {
        ret["name"]=getValueOfName();
    }
    else
    {
        ret["name"]=Json::Value();
    }
    if(getFilePath())
    {
        ret["file_path"]=getValueOfFilePath();
    }
    else
    {
        ret["file_path"]=Json::Value();
    }
    if(getUpdateTime())
    {
        ret["update_time"]=getValueOfUpdateTime();
    }
    else
    {
        ret["update_time"]=Json::Value();
    }
    return ret;
}

Json::Value Staff::toMasqueradedJson(
    const std::vector<std::string> &pMasqueradingVector) const
{
    Json::Value ret;
    if(pMasqueradingVector.size() == 5)
    {
        if(!pMasqueradingVector[0].empty())
        {
            if(getId())
            {
                ret[pMasqueradingVector[0]]=(Json::UInt64)getValueOfId();
            }
            else
            {
                ret[pMasqueradingVector[0]]=Json::Value();
            }
        }
        if(!pMasqueradingVector[1].empty())
        {
            if(getStaffId())
            {
                ret[pMasqueradingVector[1]]=getValueOfStaffId();
            }
            else
            {
                ret[pMasqueradingVector[1]]=Json::Value();
            }
        }
        if(!pMasqueradingVector[2].empty())
        {
            if(getName())
            {
                ret[pMasqueradingVector[2]]=getValueOfName();
            }
            else
            {
                ret[pMasqueradingVector[2]]=Json::Value();
            }
        }
        if(!pMasqueradingVector[3].empty())
        {
            if(getFilePath())
            {
                ret[pMasqueradingVector[3]]=getValueOfFilePath();
            }
            else
            {
                ret[pMasqueradingVector[3]]=Json::Value();
            }
        }
        if(!pMasqueradingVector[4].empty())
        {
            if(getUpdateTime())
            {
                ret[pMasqueradingVector[4]]=getValueOfUpdateTime();
            }
            else
            {
                ret[pMasqueradingVector[4]]=Json::Value();
            }
        }
        return ret;
    }
    LOG_ERROR << "Masquerade failed";
    if(getId())
    {
        ret["id"]=(Json::UInt64)getValueOfId();
    }
    else
    {
        ret["id"]=Json::Value();
    }
    if(getStaffId())
    {
        ret["staff_id"]=getValueOfStaffId();
    }
    else
    {
        ret["staff_id"]=Json::Value();
    }
    if(getName())
    {
        ret["name"]=getValueOfName();
    }
    else
    {
        ret["name"]=Json::Value();
    }
    if(getFilePath())
    {
        ret["file_path"]=getValueOfFilePath();
    }
    else
    {
        ret["file_path"]=Json::Value();
    }
    if(getUpdateTime())
    {
        ret["update_time"]=getValueOfUpdateTime();
    }
    else
    {
        ret["update_time"]=Json::Value();
    }
    return ret;
}

bool Staff::validateJsonForCreation(const Json::Value &pJson, std::string &err)
{
    if(pJson.isMember("id"))
    {
        if(!validJsonOfField(0, "id", pJson["id"], err, true))
            return false;
    }
    if(pJson.isMember("staff_id"))
    {
        if(!validJsonOfField(1, "staff_id", pJson["staff_id"], err, true))
            return false;
    }
    else
    {
        err="The staff_id column cannot be null";
        return false;
    }
    if(pJson.isMember("name"))
    {
        if(!validJsonOfField(2, "name", pJson["name"], err, true))
            return false;
    }
    else
    {
        err="The name column cannot be null";
        return false;
    }
    if(pJson.isMember("file_path"))
    {
        if(!validJsonOfField(3, "file_path", pJson["file_path"], err, true))
            return false;
    }
    else
    {
        err="The file_path column cannot be null";
        return false;
    }
    if(pJson.isMember("update_time"))
    {
        if(!validJsonOfField(4, "update_time", pJson["update_time"], err, true))
            return false;
    }
    return true;
}
bool Staff::validateMasqueradedJsonForCreation(const Json::Value &pJson,
                                               const std::vector<std::string> &pMasqueradingVector,
                                               std::string &err)
{
    if(pMasqueradingVector.size() != 5)
    {
        err = "Bad masquerading vector";
        return false;
    }
    try {
      if(!pMasqueradingVector[0].empty())
      {
          if(pJson.isMember(pMasqueradingVector[0]))
          {
              if(!validJsonOfField(0, pMasqueradingVector[0], pJson[pMasqueradingVector[0]], err, true))
                  return false;
          }
      }
      if(!pMasqueradingVector[1].empty())
      {
          if(pJson.isMember(pMasqueradingVector[1]))
          {
              if(!validJsonOfField(1, pMasqueradingVector[1], pJson[pMasqueradingVector[1]], err, true))
                  return false;
          }
        else
        {
            err="The " + pMasqueradingVector[1] + " column cannot be null";
            return false;
        }
      }
      if(!pMasqueradingVector[2].empty())
      {
          if(pJson.isMember(pMasqueradingVector[2]))
          {
              if(!validJsonOfField(2, pMasqueradingVector[2], pJson[pMasqueradingVector[2]], err, true))
                  return false;
          }
        else
        {
            err="The " + pMasqueradingVector[2] + " column cannot be null";
            return false;
        }
      }
      if(!pMasqueradingVector[3].empty())
      {
          if(pJson.isMember(pMasqueradingVector[3]))
          {
              if(!validJsonOfField(3, pMasqueradingVector[3], pJson[pMasqueradingVector[3]], err, true))
                  return false;
          }
        else
        {
            err="The " + pMasqueradingVector[3] + " column cannot be null";
            return false;
        }
      }
      if(!pMasqueradingVector[4].empty())
      {
          if(pJson.isMember(pMasqueradingVector[4]))
          {
              if(!validJsonOfField(4, pMasqueradingVector[4], pJson[pMasqueradingVector[4]], err, true))
                  return false;
          }
      }
    }
    catch(const Json::LogicError &e)
    {
      err = e.what();
      return false;
    }
    return true;
}
bool Staff::validateJsonForUpdate(const Json::Value &pJson, std::string &err)
{
    if(pJson.isMember("id"))
    {
        if(!validJsonOfField(0, "id", pJson["id"], err, false))
            return false;
    }
    else
    {
        err = "The value of primary key must be set in the json object for update";
        return false;
    }
    if(pJson.isMember("staff_id"))
    {
        if(!validJsonOfField(1, "staff_id", pJson["staff_id"], err, false))
            return false;
    }
    if(pJson.isMember("name"))
    {
        if(!validJsonOfField(2, "name", pJson["name"], err, false))
            return false;
    }
    if(pJson.isMember("file_path"))
    {
        if(!validJsonOfField(3, "file_path", pJson["file_path"], err, false))
            return false;
    }
    if(pJson.isMember("update_time"))
    {
        if(!validJsonOfField(4, "update_time", pJson["update_time"], err, false))
            return false;
    }
    return true;
}
bool Staff::validateMasqueradedJsonForUpdate(const Json::Value &pJson,
                                             const std::vector<std::string> &pMasqueradingVector,
                                             std::string &err)
{
    if(pMasqueradingVector.size() != 5)
    {
        err = "Bad masquerading vector";
        return false;
    }
    try {
      if(!pMasqueradingVector[0].empty() && pJson.isMember(pMasqueradingVector[0]))
      {
          if(!validJsonOfField(0, pMasqueradingVector[0], pJson[pMasqueradingVector[0]], err, false))
              return false;
      }
    else
    {
        err = "The value of primary key must be set in the json object for update";
        return false;
    }
      if(!pMasqueradingVector[1].empty() && pJson.isMember(pMasqueradingVector[1]))
      {
          if(!validJsonOfField(1, pMasqueradingVector[1], pJson[pMasqueradingVector[1]], err, false))
              return false;
      }
      if(!pMasqueradingVector[2].empty() && pJson.isMember(pMasqueradingVector[2]))
      {
          if(!validJsonOfField(2, pMasqueradingVector[2], pJson[pMasqueradingVector[2]], err, false))
              return false;
      }
      if(!pMasqueradingVector[3].empty() && pJson.isMember(pMasqueradingVector[3]))
      {
          if(!validJsonOfField(3, pMasqueradingVector[3], pJson[pMasqueradingVector[3]], err, false))
              return false;
      }
      if(!pMasqueradingVector[4].empty() && pJson.isMember(pMasqueradingVector[4]))
      {
          if(!validJsonOfField(4, pMasqueradingVector[4], pJson[pMasqueradingVector[4]], err, false))
              return false;
      }
    }
    catch(const Json::LogicError &e)
    {
      err = e.what();
      return false;
    }
    return true;
}
bool Staff::validJsonOfField(size_t index,
                             const std::string &fieldName,
                             const Json::Value &pJson,
                             std::string &err,
                             bool isForCreation)
{
    switch(index)
    {
        case 0:
            if(pJson.isNull())
            {
                err="The " + fieldName + " column cannot be null";
                return false;
            }
            if(isForCreation)
            {
                err="The automatic primary key cannot be set";
                return false;
            }
            if(!pJson.isUInt64())
            {
                err="Type error in the "+fieldName+" field";
                return false;
            }
            break;
        case 1:
            if(pJson.isNull())
            {
                err="The " + fieldName + " column cannot be null";
                return false;
            }
            if(!pJson.isString())
            {
                err="Type error in the "+fieldName+" field";
                return false;
            }
            break;
        case 2:
            if(pJson.isNull())
            {
                err="The " + fieldName + " column cannot be null";
                return false;
            }
            if(!pJson.isString())
            {
                err="Type error in the "+fieldName+" field";
                return false;
            }
            break;
        case 3:
            if(pJson.isNull())
            {
                err="The " + fieldName + " column cannot be null";
                return false;
            }
            if(!pJson.isString())
            {
                err="Type error in the "+fieldName+" field";
                return false;
            }
            break;
        case 4:
            if(pJson.isNull())
            {
                return true;
            }
            if(!pJson.isString())
            {
                err="Type error in the "+fieldName+" field";
                return false;
            }
            break;
        default:
            err="Internal error in the server";
            return false;
            break;
    }
    return true;
}
