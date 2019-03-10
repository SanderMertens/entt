#ifndef ENTT_ENTITY_FWD_HPP
#define ENTT_ENTITY_FWD_HPP


#include "../config/config.h"


namespace entt {


template <typename>
class basic_registry;

template<typename, typename...>
class basic_view;

template<typename...>
class basic_group;

template <typename>
struct basic_actor;

template<typename>
class basic_prototype;

template<typename>
class basic_snapshot;

template<typename>
class basic_snapshot_loader;

template<typename>
class basic_continuous_loader;

using entity = ENTT_ENTITY_TYPE;
using registry = basic_registry<entity>;
using actor = basic_actor<entity>;
using prototype = basic_prototype<entity>;
using snapshot = basic_snapshot<entity>;
using snapshot_loader = basic_snapshot_loader<entity>;
using continuous_loader = basic_continuous_loader<entity>;

template<typename... Types>
using view = basic_view<entity, Types...>;

template<typename... Types>
using group = basic_group<entity, Types...>;

}


#endif // ENTT_ENTITY_FWD_HPP
