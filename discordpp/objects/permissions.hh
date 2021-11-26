//
// Created by Aidan on 8/27/2021.
//

#ifndef OBJECT_BREAKOUTS
#error This header should only be included in plugin-objects.hh
#endif

#include "../field.hh"

#define Name Role
#define Fields                                                                 \
    field(Snowflake, id), field(std::string, name), field(int, color),         \
        field(bool, hoist), omittable_nullable_field(std::string, icon),       \
        omittable_nullable_field(std::string, unicode_emoji),                  \
        field(int, position), field(std::string, permissions),                 \
        field(bool, managed), field(bool, mentionable),                        \
        omittable_field(RoleTags, tags)
#include "../util/defineObjectOpen.hh"
// This space intentionally left blank
#include "../util/defineObjectClose.hh"

#define Name RoleTags
#define Fields                                                                 \
    omittable_field(Snowflake, bot_id),                                        \
        omittable_field(Snowflake, integration_id),                            \
        omittable_field(nullptr_t, premium_subscriber)
#include "../util/defineObjectOpen.hh"
// This space intentionally left blank
#include "../util/defineObjectClose.hh"