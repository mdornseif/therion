/**
 * @file thdb2dxm.cxx
 */
  
/* Copyright (C) 2000 Stacho Mudrak
 * 
 * $Date: $
 * $RCSfile: $
 * $Revision: $
 *
 * -------------------------------------------------------------------- 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 * --------------------------------------------------------------------
 */
 
#include "thdb2dxm.h"
#include "thdb2dmi.h"

thdb2dxm::thdb2dxm()
{
  this->prev_item = NULL;
  this->next_item = NULL;

  this->first_bm = NULL;
  this->last_bm = NULL;

  this->title = false;
  this->expand = false;
  
  this->map = NULL;
  this->selection_level = 0;
  this->output_number = 0;
}

  
