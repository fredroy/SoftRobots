/******************************************************************************
*       SOFA, Simulation Open-Framework Architecture                          *
*                (c) 2006-2018 INRIA, USTL, UJF, CNRS, MGH                    *
*                                                                             *
* This library is free software; you can redistribute it and/or modify it     *
* under the terms of the GNU Lesser General Public License as published by    *
* the Free Software Foundation; either version 2.1 of the License, or (at     *
* your option) any later version.                                             *
*                                                                             *
* This library is distributed in the hope that it will be useful, but WITHOUT *
* ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or       *
* FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License *
* for more details.                                                           *
*                                                                             *
* You should have received a copy of the GNU Lesser General Public License    *
* along with this library; if not, write to the Free Software Foundation,     *
* Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301 USA.          *
*******************************************************************************
*                           Plugin SoftRobots    v1.0                         *
*				                                              *
* This plugin is also distributed under the GNU LGPL (Lesser General          *
* Public License) license with the same conditions than SOFA.                 *
*                                                                             *
* Contributors: Defrost team  (INRIA, University of Lille, CNRS,              *
*               Ecole Centrale de Lille)                                      *
*                                                                             *
* Contact information: https://project.inria.fr/softrobot/contact/            *
*                                                                             *
******************************************************************************/

#define SOFA_COMPONENT_ENGINE_DATAVARIATIONLIMITER_CPP

#include "DataVariationLimiter.inl"
#include <sofa/core/ObjectFactory.h>

namespace sofa
{

namespace component
{

namespace controller
{

using namespace sofa::defaulttype;
using namespace sofa::helper;
using core::RegisterObject;

int DataVariationLimiterClass = RegisterObject("This component interpolates between two consecutive inputs when a jump is detected.")
#ifdef SOFA_WITH_FLOAT
        .add< DataVariationLimiter<Vec3f> >()
        .add< DataVariationLimiter<Vec2f> >()
        .add< DataVariationLimiter<Vec1f> >()
#endif
#ifdef SOFA_WITH_DOUBLE
        .add< DataVariationLimiter<Vec3d> >(true)
        .add< DataVariationLimiter<Vec2d> >()
        .add< DataVariationLimiter<Vec1d> >()
#endif
        .add< DataVariationLimiter<Vec1i> >()
        .add< DataVariationLimiter<Vec2i> >()
        .add< DataVariationLimiter<Vec3i> >()
        ;

#ifdef SOFA_WITH_FLOAT
template class SOFA_SOFTROBOTS_API DataVariationLimiter<Vec3f>;
template class SOFA_SOFTROBOTS_API DataVariationLimiter<Vec2f>;
template class SOFA_SOFTROBOTS_API DataVariationLimiter<Vec1f>;
#endif
#ifdef SOFA_WITH_DOUBLE
template class SOFA_SOFTROBOTS_API DataVariationLimiter<Vec3d>;
template class SOFA_SOFTROBOTS_API DataVariationLimiter<Vec2d>;
template class SOFA_SOFTROBOTS_API DataVariationLimiter<Vec1d>;
#endif

template class SOFA_SOFTROBOTS_API DataVariationLimiter<Vec1i>;
template class SOFA_SOFTROBOTS_API DataVariationLimiter<Vec2i>;
template class SOFA_SOFTROBOTS_API DataVariationLimiter<Vec3i>;

} // namespace constraintset

} // namespace component

} // namespace sofa

