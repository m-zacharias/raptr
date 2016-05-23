/**
 * Copyright 2016 Malte Zacharias
 *
 * This file is part of raptr.
 *
 * raptr is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * raptr is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with raptr.
 * If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef PLYGRID_HPP
#define PLYGRID_HPP

#include "CompositePlyGeometry.hpp"

template<typename Vertex>
class PlyGrid : public CompositePlyGeometry
{
  public:
    
    PlyGrid(
          std::string const,
          Vertex,
          int const &, int const &, int const &,
          typename Vertex::Coord_t const &,
          typename Vertex::Coord_t const &,
          typename Vertex::Coord_t const & );
};
#include "PlyGrid.tpp"

#endif  // #define PLYGRID_HPP
