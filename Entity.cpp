/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Entity.cpp
 * Author: cancian
 * 
 * Created on 21 de Junho de 2018, 16:30
 */

#include <typeinfo>
#include "Entity.h"

Entity::Entity() : ModelInfrastructure(Util::TypeOf<Entity>()) {
	_name = "Entity " + Util::GenerateNewIdOfType<Entity>();
}

Entity::Entity(const Entity& orig) : ModelInfrastructure(orig) {
}

Entity::~Entity() {
}

void Entity::setEntityTypeName(std::string _entityTypeName) {
	this->_entityTypeName = _entityTypeName;
}

std::string Entity::getEntityTypeName() const {
	return _entityTypeName;
}

std::string Entity::show() {
	return ModelInfrastructure::show() +
			",entityTypeName=" + this->_entityTypeName; //+ ",attributeValues="+std::to_string(this->_attributeValues);
}

double Entity::getAttributeValue(std::string attributeName) {
}

void Entity::setAttributeValue(std::string attributeName, double value) {
}

void Entity::_loadInstance(std::list<std::string> words) {
}

std::list<std::string>* Entity::_saveInstance() {
	std::list<std::string>* words = ModelInfrastructure::_saveInstance(Util::TypeOf<Entity>());
	return words;
}

bool Entity::_verifySymbols(std::string* errorMessage) {
	return true;
}
