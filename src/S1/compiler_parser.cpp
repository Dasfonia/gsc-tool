// A Bison parser, made by GNU Bison 3.7.3.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015, 2018-2020 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.

// DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
// especially those whose name start with YY_ or yy_.  They are
// private implementation details that can be changed or removed.

// "%code top" blocks.
#line 37 "S1.parser.ypp"

    #include "S1.hpp"
	#include "compiler_parser.hpp"
	#include "compiler_lexer.hpp"
	S1::parser::symbol_type S1lex(yyscan_t yyscanner, std::uint32_t *location);

#line 46 "./S1/compiler_parser.cpp"

// Take the name prefix into account.
#define yylex   S1lex



#include "compiler_parser.hpp"




#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> // FIXME: INFRINGES ON USER NAME SPACE.
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif


// Whether we are compiled with exception support.
#ifndef YY_EXCEPTIONS
# if defined __GNUC__ && !defined __EXCEPTIONS
#  define YY_EXCEPTIONS 0
# else
#  define YY_EXCEPTIONS 1
# endif
#endif



// Enable debugging if requested.
#if S1DEBUG

// A pseudo ostream that takes yydebug_ into account.
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Symbol)         \
  do {                                          \
    if (yydebug_)                               \
    {                                           \
      *yycdebug_ << Title << ' ';               \
      yy_print_ (*yycdebug_, Symbol);           \
      *yycdebug_ << '\n';                       \
    }                                           \
  } while (false)

# define YY_REDUCE_PRINT(Rule)          \
  do {                                  \
    if (yydebug_)                       \
      yy_reduce_print_ (Rule);          \
  } while (false)

# define YY_STACK_PRINT()               \
  do {                                  \
    if (yydebug_)                       \
      yy_stack_print_ ();                \
  } while (false)

#else // !S1DEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YYUSE (Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void> (0)
# define YY_STACK_PRINT()                static_cast<void> (0)

#endif // !S1DEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)

#line 14 "S1.parser.ypp"
namespace S1 {
#line 129 "./S1/compiler_parser.cpp"

  /// Build a parser object.
  parser::parser (yyscan_t yyscanner_yyarg, std::uint32_t *location_yyarg, gsc::script_ptr& astout_yyarg)
#if S1DEBUG
    : yydebug_ (false),
      yycdebug_ (&std::cerr),
#else
    :
#endif
      yy_lac_established_ (false),
      yyscanner (yyscanner_yyarg),
      location (location_yyarg),
      astout (astout_yyarg)
  {}

  parser::~parser ()
  {}

  parser::syntax_error::~syntax_error () YY_NOEXCEPT YY_NOTHROW
  {}

  /*---------------.
  | symbol kinds.  |
  `---------------*/



  // by_state.
  parser::by_state::by_state () YY_NOEXCEPT
    : state (empty_state)
  {}

  parser::by_state::by_state (const by_state& that) YY_NOEXCEPT
    : state (that.state)
  {}

  void
  parser::by_state::clear () YY_NOEXCEPT
  {
    state = empty_state;
  }

  void
  parser::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  parser::by_state::by_state (state_type s) YY_NOEXCEPT
    : state (s)
  {}

  parser::symbol_kind_type
  parser::by_state::kind () const YY_NOEXCEPT
  {
    if (state == empty_state)
      return symbol_kind::S_YYEMPTY;
    else
      return YY_CAST (symbol_kind_type, yystos_[+state]);
  }

  parser::stack_symbol_type::stack_symbol_type ()
  {}

  parser::stack_symbol_type::stack_symbol_type (YY_RVREF (stack_symbol_type) that)
    : super_type (YY_MOVE (that.state))
  {
    switch (that.kind ())
    {
      case symbol_kind::S_animref: // animref
        value.YY_MOVE_OR_COPY< gsc::animref_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_animtree: // animtree
        value.YY_MOVE_OR_COPY< gsc::animtree_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_block: // block
        value.YY_MOVE_OR_COPY< gsc::block_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_constant: // constant
        value.YY_MOVE_OR_COPY< gsc::constant_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_definition: // definition
        value.YY_MOVE_OR_COPY< gsc::definition_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_arguments: // expr_arguments
        value.YY_MOVE_OR_COPY< gsc::expr_arguments_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_assign: // expr_assign
        value.YY_MOVE_OR_COPY< gsc::expr_assign_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_call: // expr_call
      case symbol_kind::S_expr_call_thread: // expr_call_thread
        value.YY_MOVE_OR_COPY< gsc::expr_call_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_call_function: // expr_call_function
      case symbol_kind::S_expr_call_pointer: // expr_call_pointer
        value.YY_MOVE_OR_COPY< gsc::expr_call_type_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_for_assign: // for_assign
      case symbol_kind::S_for_cond: // for_cond
      case symbol_kind::S_expr: // expr
      case symbol_kind::S_expr_cmp: // expr_cmp
      case symbol_kind::S_expr_ternary: // expr_ternary
      case symbol_kind::S_expr_binary: // expr_binary
      case symbol_kind::S_expr_primitive: // expr_primitive
        value.YY_MOVE_OR_COPY< gsc::expr_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_data_false: // data_false
        value.YY_MOVE_OR_COPY< gsc::false_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_filepath: // filepath
        value.YY_MOVE_OR_COPY< gsc::filepath_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_data_float: // data_float
        value.YY_MOVE_OR_COPY< gsc::float_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_identifier: // identifier
        value.YY_MOVE_OR_COPY< gsc::identifier_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_include: // include
        value.YY_MOVE_OR_COPY< gsc::include_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_data_integer: // data_integer
        value.YY_MOVE_OR_COPY< gsc::integer_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_data_localized_string: // data_localized_string
        value.YY_MOVE_OR_COPY< gsc::localized_string_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_function_ref: // expr_function_ref
      case symbol_kind::S_expr_array: // expr_array
      case symbol_kind::S_expr_field: // expr_field
      case symbol_kind::S_expr_size: // expr_size
      case symbol_kind::S_expr_vector: // expr_vector
      case symbol_kind::S_expr_add_array: // expr_add_array
      case symbol_kind::S_object: // object
      case symbol_kind::S_vector: // vector
      case symbol_kind::S_number: // number
      case symbol_kind::S_empty_array: // empty_array
      case symbol_kind::S_undefined: // undefined
      case symbol_kind::S_size: // size
      case symbol_kind::S_game: // game
      case symbol_kind::S_self: // self
      case symbol_kind::S_anim: // anim
      case symbol_kind::S_level: // level
        value.YY_MOVE_OR_COPY< gsc::node_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_parameters: // parameters
        value.YY_MOVE_OR_COPY< gsc::parameters_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_script: // script
        value.YY_MOVE_OR_COPY< gsc::script_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_assign: // stmt_assign
        value.YY_MOVE_OR_COPY< gsc::stmt_assign_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_break: // stmt_break
        value.YY_MOVE_OR_COPY< gsc::stmt_break_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_call: // stmt_call
        value.YY_MOVE_OR_COPY< gsc::stmt_call_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_case: // stmt_case
        value.YY_MOVE_OR_COPY< gsc::stmt_case_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_continue: // stmt_continue
        value.YY_MOVE_OR_COPY< gsc::stmt_continue_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_default: // stmt_default
        value.YY_MOVE_OR_COPY< gsc::stmt_default_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_endon: // stmt_endon
        value.YY_MOVE_OR_COPY< gsc::stmt_endon_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_for: // stmt_for
        value.YY_MOVE_OR_COPY< gsc::stmt_for_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_foreach: // stmt_foreach
        value.YY_MOVE_OR_COPY< gsc::stmt_foreach_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_if: // stmt_if
        value.YY_MOVE_OR_COPY< gsc::stmt_if_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_ifelse: // stmt_ifelse
        value.YY_MOVE_OR_COPY< gsc::stmt_ifelse_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_notify: // stmt_notify
        value.YY_MOVE_OR_COPY< gsc::stmt_notify_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt: // stmt
        value.YY_MOVE_OR_COPY< gsc::stmt_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_return: // stmt_return
        value.YY_MOVE_OR_COPY< gsc::stmt_return_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_switch: // stmt_switch
        value.YY_MOVE_OR_COPY< gsc::stmt_switch_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_wait: // stmt_wait
        value.YY_MOVE_OR_COPY< gsc::stmt_wait_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_waitframe: // stmt_waitframe
        value.YY_MOVE_OR_COPY< gsc::stmt_waitframe_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_waittill: // stmt_waittill
        value.YY_MOVE_OR_COPY< gsc::stmt_waittill_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_waittillframeend: // stmt_waittillframeend
        value.YY_MOVE_OR_COPY< gsc::stmt_waittillframeend_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_waittillmatch: // stmt_waittillmatch
        value.YY_MOVE_OR_COPY< gsc::stmt_waittillmatch_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_while: // stmt_while
        value.YY_MOVE_OR_COPY< gsc::stmt_while_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_data_string: // data_string
        value.YY_MOVE_OR_COPY< gsc::string_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_thread: // thread
        value.YY_MOVE_OR_COPY< gsc::thread_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_data_true: // data_true
        value.YY_MOVE_OR_COPY< gsc::true_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_using_animtree: // using_animtree
        value.YY_MOVE_OR_COPY< gsc::using_animtree_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_FILEPATH: // FILEPATH
      case symbol_kind::S_IDENTIFIER: // IDENTIFIER
      case symbol_kind::S_ANIMREF: // ANIMREF
      case symbol_kind::S_STRING: // STRING
      case symbol_kind::S_STRING_LOC: // STRING_LOC
      case symbol_kind::S_FLOAT: // FLOAT
      case symbol_kind::S_INTEGER: // INTEGER
        value.YY_MOVE_OR_COPY< std::string > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

#if 201103L <= YY_CPLUSPLUS
    // that is emptied.
    that.state = empty_state;
#endif
  }

  parser::stack_symbol_type::stack_symbol_type (state_type s, YY_MOVE_REF (symbol_type) that)
    : super_type (s)
  {
    switch (that.kind ())
    {
      case symbol_kind::S_animref: // animref
        value.move< gsc::animref_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_animtree: // animtree
        value.move< gsc::animtree_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_block: // block
        value.move< gsc::block_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_constant: // constant
        value.move< gsc::constant_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_definition: // definition
        value.move< gsc::definition_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_arguments: // expr_arguments
        value.move< gsc::expr_arguments_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_assign: // expr_assign
        value.move< gsc::expr_assign_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_call: // expr_call
      case symbol_kind::S_expr_call_thread: // expr_call_thread
        value.move< gsc::expr_call_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_call_function: // expr_call_function
      case symbol_kind::S_expr_call_pointer: // expr_call_pointer
        value.move< gsc::expr_call_type_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_for_assign: // for_assign
      case symbol_kind::S_for_cond: // for_cond
      case symbol_kind::S_expr: // expr
      case symbol_kind::S_expr_cmp: // expr_cmp
      case symbol_kind::S_expr_ternary: // expr_ternary
      case symbol_kind::S_expr_binary: // expr_binary
      case symbol_kind::S_expr_primitive: // expr_primitive
        value.move< gsc::expr_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_data_false: // data_false
        value.move< gsc::false_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_filepath: // filepath
        value.move< gsc::filepath_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_data_float: // data_float
        value.move< gsc::float_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_identifier: // identifier
        value.move< gsc::identifier_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_include: // include
        value.move< gsc::include_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_data_integer: // data_integer
        value.move< gsc::integer_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_data_localized_string: // data_localized_string
        value.move< gsc::localized_string_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_function_ref: // expr_function_ref
      case symbol_kind::S_expr_array: // expr_array
      case symbol_kind::S_expr_field: // expr_field
      case symbol_kind::S_expr_size: // expr_size
      case symbol_kind::S_expr_vector: // expr_vector
      case symbol_kind::S_expr_add_array: // expr_add_array
      case symbol_kind::S_object: // object
      case symbol_kind::S_vector: // vector
      case symbol_kind::S_number: // number
      case symbol_kind::S_empty_array: // empty_array
      case symbol_kind::S_undefined: // undefined
      case symbol_kind::S_size: // size
      case symbol_kind::S_game: // game
      case symbol_kind::S_self: // self
      case symbol_kind::S_anim: // anim
      case symbol_kind::S_level: // level
        value.move< gsc::node_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_parameters: // parameters
        value.move< gsc::parameters_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_script: // script
        value.move< gsc::script_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_assign: // stmt_assign
        value.move< gsc::stmt_assign_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_break: // stmt_break
        value.move< gsc::stmt_break_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_call: // stmt_call
        value.move< gsc::stmt_call_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_case: // stmt_case
        value.move< gsc::stmt_case_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_continue: // stmt_continue
        value.move< gsc::stmt_continue_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_default: // stmt_default
        value.move< gsc::stmt_default_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_endon: // stmt_endon
        value.move< gsc::stmt_endon_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_for: // stmt_for
        value.move< gsc::stmt_for_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_foreach: // stmt_foreach
        value.move< gsc::stmt_foreach_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_if: // stmt_if
        value.move< gsc::stmt_if_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_ifelse: // stmt_ifelse
        value.move< gsc::stmt_ifelse_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_notify: // stmt_notify
        value.move< gsc::stmt_notify_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt: // stmt
        value.move< gsc::stmt_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_return: // stmt_return
        value.move< gsc::stmt_return_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_switch: // stmt_switch
        value.move< gsc::stmt_switch_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_wait: // stmt_wait
        value.move< gsc::stmt_wait_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_waitframe: // stmt_waitframe
        value.move< gsc::stmt_waitframe_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_waittill: // stmt_waittill
        value.move< gsc::stmt_waittill_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_waittillframeend: // stmt_waittillframeend
        value.move< gsc::stmt_waittillframeend_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_waittillmatch: // stmt_waittillmatch
        value.move< gsc::stmt_waittillmatch_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_while: // stmt_while
        value.move< gsc::stmt_while_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_data_string: // data_string
        value.move< gsc::string_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_thread: // thread
        value.move< gsc::thread_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_data_true: // data_true
        value.move< gsc::true_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_using_animtree: // using_animtree
        value.move< gsc::using_animtree_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_FILEPATH: // FILEPATH
      case symbol_kind::S_IDENTIFIER: // IDENTIFIER
      case symbol_kind::S_ANIMREF: // ANIMREF
      case symbol_kind::S_STRING: // STRING
      case symbol_kind::S_STRING_LOC: // STRING_LOC
      case symbol_kind::S_FLOAT: // FLOAT
      case symbol_kind::S_INTEGER: // INTEGER
        value.move< std::string > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

    // that is emptied.
    that.kind_ = symbol_kind::S_YYEMPTY;
  }

#if YY_CPLUSPLUS < 201103L
  parser::stack_symbol_type&
  parser::stack_symbol_type::operator= (const stack_symbol_type& that)
  {
    state = that.state;
    switch (that.kind ())
    {
      case symbol_kind::S_animref: // animref
        value.copy< gsc::animref_ptr > (that.value);
        break;

      case symbol_kind::S_animtree: // animtree
        value.copy< gsc::animtree_ptr > (that.value);
        break;

      case symbol_kind::S_block: // block
        value.copy< gsc::block_ptr > (that.value);
        break;

      case symbol_kind::S_constant: // constant
        value.copy< gsc::constant_ptr > (that.value);
        break;

      case symbol_kind::S_definition: // definition
        value.copy< gsc::definition_ptr > (that.value);
        break;

      case symbol_kind::S_expr_arguments: // expr_arguments
        value.copy< gsc::expr_arguments_ptr > (that.value);
        break;

      case symbol_kind::S_expr_assign: // expr_assign
        value.copy< gsc::expr_assign_ptr > (that.value);
        break;

      case symbol_kind::S_expr_call: // expr_call
      case symbol_kind::S_expr_call_thread: // expr_call_thread
        value.copy< gsc::expr_call_ptr > (that.value);
        break;

      case symbol_kind::S_expr_call_function: // expr_call_function
      case symbol_kind::S_expr_call_pointer: // expr_call_pointer
        value.copy< gsc::expr_call_type_ptr > (that.value);
        break;

      case symbol_kind::S_for_assign: // for_assign
      case symbol_kind::S_for_cond: // for_cond
      case symbol_kind::S_expr: // expr
      case symbol_kind::S_expr_cmp: // expr_cmp
      case symbol_kind::S_expr_ternary: // expr_ternary
      case symbol_kind::S_expr_binary: // expr_binary
      case symbol_kind::S_expr_primitive: // expr_primitive
        value.copy< gsc::expr_ptr > (that.value);
        break;

      case symbol_kind::S_data_false: // data_false
        value.copy< gsc::false_ptr > (that.value);
        break;

      case symbol_kind::S_filepath: // filepath
        value.copy< gsc::filepath_ptr > (that.value);
        break;

      case symbol_kind::S_data_float: // data_float
        value.copy< gsc::float_ptr > (that.value);
        break;

      case symbol_kind::S_identifier: // identifier
        value.copy< gsc::identifier_ptr > (that.value);
        break;

      case symbol_kind::S_include: // include
        value.copy< gsc::include_ptr > (that.value);
        break;

      case symbol_kind::S_data_integer: // data_integer
        value.copy< gsc::integer_ptr > (that.value);
        break;

      case symbol_kind::S_data_localized_string: // data_localized_string
        value.copy< gsc::localized_string_ptr > (that.value);
        break;

      case symbol_kind::S_expr_function_ref: // expr_function_ref
      case symbol_kind::S_expr_array: // expr_array
      case symbol_kind::S_expr_field: // expr_field
      case symbol_kind::S_expr_size: // expr_size
      case symbol_kind::S_expr_vector: // expr_vector
      case symbol_kind::S_expr_add_array: // expr_add_array
      case symbol_kind::S_object: // object
      case symbol_kind::S_vector: // vector
      case symbol_kind::S_number: // number
      case symbol_kind::S_empty_array: // empty_array
      case symbol_kind::S_undefined: // undefined
      case symbol_kind::S_size: // size
      case symbol_kind::S_game: // game
      case symbol_kind::S_self: // self
      case symbol_kind::S_anim: // anim
      case symbol_kind::S_level: // level
        value.copy< gsc::node_ptr > (that.value);
        break;

      case symbol_kind::S_parameters: // parameters
        value.copy< gsc::parameters_ptr > (that.value);
        break;

      case symbol_kind::S_script: // script
        value.copy< gsc::script_ptr > (that.value);
        break;

      case symbol_kind::S_stmt_assign: // stmt_assign
        value.copy< gsc::stmt_assign_ptr > (that.value);
        break;

      case symbol_kind::S_stmt_break: // stmt_break
        value.copy< gsc::stmt_break_ptr > (that.value);
        break;

      case symbol_kind::S_stmt_call: // stmt_call
        value.copy< gsc::stmt_call_ptr > (that.value);
        break;

      case symbol_kind::S_stmt_case: // stmt_case
        value.copy< gsc::stmt_case_ptr > (that.value);
        break;

      case symbol_kind::S_stmt_continue: // stmt_continue
        value.copy< gsc::stmt_continue_ptr > (that.value);
        break;

      case symbol_kind::S_stmt_default: // stmt_default
        value.copy< gsc::stmt_default_ptr > (that.value);
        break;

      case symbol_kind::S_stmt_endon: // stmt_endon
        value.copy< gsc::stmt_endon_ptr > (that.value);
        break;

      case symbol_kind::S_stmt_for: // stmt_for
        value.copy< gsc::stmt_for_ptr > (that.value);
        break;

      case symbol_kind::S_stmt_foreach: // stmt_foreach
        value.copy< gsc::stmt_foreach_ptr > (that.value);
        break;

      case symbol_kind::S_stmt_if: // stmt_if
        value.copy< gsc::stmt_if_ptr > (that.value);
        break;

      case symbol_kind::S_stmt_ifelse: // stmt_ifelse
        value.copy< gsc::stmt_ifelse_ptr > (that.value);
        break;

      case symbol_kind::S_stmt_notify: // stmt_notify
        value.copy< gsc::stmt_notify_ptr > (that.value);
        break;

      case symbol_kind::S_stmt: // stmt
        value.copy< gsc::stmt_ptr > (that.value);
        break;

      case symbol_kind::S_stmt_return: // stmt_return
        value.copy< gsc::stmt_return_ptr > (that.value);
        break;

      case symbol_kind::S_stmt_switch: // stmt_switch
        value.copy< gsc::stmt_switch_ptr > (that.value);
        break;

      case symbol_kind::S_stmt_wait: // stmt_wait
        value.copy< gsc::stmt_wait_ptr > (that.value);
        break;

      case symbol_kind::S_stmt_waitframe: // stmt_waitframe
        value.copy< gsc::stmt_waitframe_ptr > (that.value);
        break;

      case symbol_kind::S_stmt_waittill: // stmt_waittill
        value.copy< gsc::stmt_waittill_ptr > (that.value);
        break;

      case symbol_kind::S_stmt_waittillframeend: // stmt_waittillframeend
        value.copy< gsc::stmt_waittillframeend_ptr > (that.value);
        break;

      case symbol_kind::S_stmt_waittillmatch: // stmt_waittillmatch
        value.copy< gsc::stmt_waittillmatch_ptr > (that.value);
        break;

      case symbol_kind::S_stmt_while: // stmt_while
        value.copy< gsc::stmt_while_ptr > (that.value);
        break;

      case symbol_kind::S_data_string: // data_string
        value.copy< gsc::string_ptr > (that.value);
        break;

      case symbol_kind::S_thread: // thread
        value.copy< gsc::thread_ptr > (that.value);
        break;

      case symbol_kind::S_data_true: // data_true
        value.copy< gsc::true_ptr > (that.value);
        break;

      case symbol_kind::S_using_animtree: // using_animtree
        value.copy< gsc::using_animtree_ptr > (that.value);
        break;

      case symbol_kind::S_FILEPATH: // FILEPATH
      case symbol_kind::S_IDENTIFIER: // IDENTIFIER
      case symbol_kind::S_ANIMREF: // ANIMREF
      case symbol_kind::S_STRING: // STRING
      case symbol_kind::S_STRING_LOC: // STRING_LOC
      case symbol_kind::S_FLOAT: // FLOAT
      case symbol_kind::S_INTEGER: // INTEGER
        value.copy< std::string > (that.value);
        break;

      default:
        break;
    }

    return *this;
  }

  parser::stack_symbol_type&
  parser::stack_symbol_type::operator= (stack_symbol_type& that)
  {
    state = that.state;
    switch (that.kind ())
    {
      case symbol_kind::S_animref: // animref
        value.move< gsc::animref_ptr > (that.value);
        break;

      case symbol_kind::S_animtree: // animtree
        value.move< gsc::animtree_ptr > (that.value);
        break;

      case symbol_kind::S_block: // block
        value.move< gsc::block_ptr > (that.value);
        break;

      case symbol_kind::S_constant: // constant
        value.move< gsc::constant_ptr > (that.value);
        break;

      case symbol_kind::S_definition: // definition
        value.move< gsc::definition_ptr > (that.value);
        break;

      case symbol_kind::S_expr_arguments: // expr_arguments
        value.move< gsc::expr_arguments_ptr > (that.value);
        break;

      case symbol_kind::S_expr_assign: // expr_assign
        value.move< gsc::expr_assign_ptr > (that.value);
        break;

      case symbol_kind::S_expr_call: // expr_call
      case symbol_kind::S_expr_call_thread: // expr_call_thread
        value.move< gsc::expr_call_ptr > (that.value);
        break;

      case symbol_kind::S_expr_call_function: // expr_call_function
      case symbol_kind::S_expr_call_pointer: // expr_call_pointer
        value.move< gsc::expr_call_type_ptr > (that.value);
        break;

      case symbol_kind::S_for_assign: // for_assign
      case symbol_kind::S_for_cond: // for_cond
      case symbol_kind::S_expr: // expr
      case symbol_kind::S_expr_cmp: // expr_cmp
      case symbol_kind::S_expr_ternary: // expr_ternary
      case symbol_kind::S_expr_binary: // expr_binary
      case symbol_kind::S_expr_primitive: // expr_primitive
        value.move< gsc::expr_ptr > (that.value);
        break;

      case symbol_kind::S_data_false: // data_false
        value.move< gsc::false_ptr > (that.value);
        break;

      case symbol_kind::S_filepath: // filepath
        value.move< gsc::filepath_ptr > (that.value);
        break;

      case symbol_kind::S_data_float: // data_float
        value.move< gsc::float_ptr > (that.value);
        break;

      case symbol_kind::S_identifier: // identifier
        value.move< gsc::identifier_ptr > (that.value);
        break;

      case symbol_kind::S_include: // include
        value.move< gsc::include_ptr > (that.value);
        break;

      case symbol_kind::S_data_integer: // data_integer
        value.move< gsc::integer_ptr > (that.value);
        break;

      case symbol_kind::S_data_localized_string: // data_localized_string
        value.move< gsc::localized_string_ptr > (that.value);
        break;

      case symbol_kind::S_expr_function_ref: // expr_function_ref
      case symbol_kind::S_expr_array: // expr_array
      case symbol_kind::S_expr_field: // expr_field
      case symbol_kind::S_expr_size: // expr_size
      case symbol_kind::S_expr_vector: // expr_vector
      case symbol_kind::S_expr_add_array: // expr_add_array
      case symbol_kind::S_object: // object
      case symbol_kind::S_vector: // vector
      case symbol_kind::S_number: // number
      case symbol_kind::S_empty_array: // empty_array
      case symbol_kind::S_undefined: // undefined
      case symbol_kind::S_size: // size
      case symbol_kind::S_game: // game
      case symbol_kind::S_self: // self
      case symbol_kind::S_anim: // anim
      case symbol_kind::S_level: // level
        value.move< gsc::node_ptr > (that.value);
        break;

      case symbol_kind::S_parameters: // parameters
        value.move< gsc::parameters_ptr > (that.value);
        break;

      case symbol_kind::S_script: // script
        value.move< gsc::script_ptr > (that.value);
        break;

      case symbol_kind::S_stmt_assign: // stmt_assign
        value.move< gsc::stmt_assign_ptr > (that.value);
        break;

      case symbol_kind::S_stmt_break: // stmt_break
        value.move< gsc::stmt_break_ptr > (that.value);
        break;

      case symbol_kind::S_stmt_call: // stmt_call
        value.move< gsc::stmt_call_ptr > (that.value);
        break;

      case symbol_kind::S_stmt_case: // stmt_case
        value.move< gsc::stmt_case_ptr > (that.value);
        break;

      case symbol_kind::S_stmt_continue: // stmt_continue
        value.move< gsc::stmt_continue_ptr > (that.value);
        break;

      case symbol_kind::S_stmt_default: // stmt_default
        value.move< gsc::stmt_default_ptr > (that.value);
        break;

      case symbol_kind::S_stmt_endon: // stmt_endon
        value.move< gsc::stmt_endon_ptr > (that.value);
        break;

      case symbol_kind::S_stmt_for: // stmt_for
        value.move< gsc::stmt_for_ptr > (that.value);
        break;

      case symbol_kind::S_stmt_foreach: // stmt_foreach
        value.move< gsc::stmt_foreach_ptr > (that.value);
        break;

      case symbol_kind::S_stmt_if: // stmt_if
        value.move< gsc::stmt_if_ptr > (that.value);
        break;

      case symbol_kind::S_stmt_ifelse: // stmt_ifelse
        value.move< gsc::stmt_ifelse_ptr > (that.value);
        break;

      case symbol_kind::S_stmt_notify: // stmt_notify
        value.move< gsc::stmt_notify_ptr > (that.value);
        break;

      case symbol_kind::S_stmt: // stmt
        value.move< gsc::stmt_ptr > (that.value);
        break;

      case symbol_kind::S_stmt_return: // stmt_return
        value.move< gsc::stmt_return_ptr > (that.value);
        break;

      case symbol_kind::S_stmt_switch: // stmt_switch
        value.move< gsc::stmt_switch_ptr > (that.value);
        break;

      case symbol_kind::S_stmt_wait: // stmt_wait
        value.move< gsc::stmt_wait_ptr > (that.value);
        break;

      case symbol_kind::S_stmt_waitframe: // stmt_waitframe
        value.move< gsc::stmt_waitframe_ptr > (that.value);
        break;

      case symbol_kind::S_stmt_waittill: // stmt_waittill
        value.move< gsc::stmt_waittill_ptr > (that.value);
        break;

      case symbol_kind::S_stmt_waittillframeend: // stmt_waittillframeend
        value.move< gsc::stmt_waittillframeend_ptr > (that.value);
        break;

      case symbol_kind::S_stmt_waittillmatch: // stmt_waittillmatch
        value.move< gsc::stmt_waittillmatch_ptr > (that.value);
        break;

      case symbol_kind::S_stmt_while: // stmt_while
        value.move< gsc::stmt_while_ptr > (that.value);
        break;

      case symbol_kind::S_data_string: // data_string
        value.move< gsc::string_ptr > (that.value);
        break;

      case symbol_kind::S_thread: // thread
        value.move< gsc::thread_ptr > (that.value);
        break;

      case symbol_kind::S_data_true: // data_true
        value.move< gsc::true_ptr > (that.value);
        break;

      case symbol_kind::S_using_animtree: // using_animtree
        value.move< gsc::using_animtree_ptr > (that.value);
        break;

      case symbol_kind::S_FILEPATH: // FILEPATH
      case symbol_kind::S_IDENTIFIER: // IDENTIFIER
      case symbol_kind::S_ANIMREF: // ANIMREF
      case symbol_kind::S_STRING: // STRING
      case symbol_kind::S_STRING_LOC: // STRING_LOC
      case symbol_kind::S_FLOAT: // FLOAT
      case symbol_kind::S_INTEGER: // INTEGER
        value.move< std::string > (that.value);
        break;

      default:
        break;
    }

    // that is emptied.
    that.state = empty_state;
    return *this;
  }
#endif

  template <typename Base>
  void
  parser::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);
  }

#if S1DEBUG
  template <typename Base>
  void
  parser::yy_print_ (std::ostream& yyo, const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YYUSE (yyoutput);
    if (yysym.empty ())
      yyo << "empty symbol";
    else
      {
        symbol_kind_type yykind = yysym.kind ();
        yyo << (yykind < YYNTOKENS ? "token" : "nterm")
            << ' ' << yysym.name () << " (";
        YYUSE (yykind);
        yyo << ')';
      }
  }
#endif

  void
  parser::yypush_ (const char* m, YY_MOVE_REF (stack_symbol_type) sym)
  {
    if (m)
      YY_SYMBOL_PRINT (m, sym);
    yystack_.push (YY_MOVE (sym));
  }

  void
  parser::yypush_ (const char* m, state_type s, YY_MOVE_REF (symbol_type) sym)
  {
#if 201103L <= YY_CPLUSPLUS
    yypush_ (m, stack_symbol_type (s, std::move (sym)));
#else
    stack_symbol_type ss (s, sym);
    yypush_ (m, ss);
#endif
  }

  void
  parser::yypop_ (int n)
  {
    yystack_.pop (n);
  }

#if S1DEBUG
  std::ostream&
  parser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  parser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  parser::debug_level_type
  parser::debug_level () const
  {
    return yydebug_;
  }

  void
  parser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // S1DEBUG

  parser::state_type
  parser::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - YYNTOKENS] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - YYNTOKENS];
  }

  bool
  parser::yy_pact_value_is_default_ (int yyvalue)
  {
    return yyvalue == yypact_ninf_;
  }

  bool
  parser::yy_table_value_is_error_ (int yyvalue)
  {
    return yyvalue == yytable_ninf_;
  }

  int
  parser::operator() ()
  {
    return parse ();
  }

  int
  parser::parse ()
  {
    int yyn;
    /// Length of the RHS of the rule being reduced.
    int yylen = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// The lookahead symbol.
    symbol_type yyla;

    /// The return value of parse ().
    int yyresult;

    /// Discard the LAC context in case there still is one left from a
    /// previous invocation.
    yy_lac_discard_ ("init");

#if YY_EXCEPTIONS
    try
#endif // YY_EXCEPTIONS
      {
    YYCDEBUG << "Starting parse\n";


    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, YY_MOVE (yyla));

  /*-----------------------------------------------.
  | yynewstate -- push a new symbol on the stack.  |
  `-----------------------------------------------*/
  yynewstate:
    YYCDEBUG << "Entering state " << int (yystack_[0].state) << '\n';
    YY_STACK_PRINT ();

    // Accept?
    if (yystack_[0].state == yyfinal_)
      YYACCEPT;

    goto yybackup;


  /*-----------.
  | yybackup.  |
  `-----------*/
  yybackup:
    // Try to take a decision without lookahead.
    yyn = yypact_[+yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyla.empty ())
      {
        YYCDEBUG << "Reading a token\n";
#if YY_EXCEPTIONS
        try
#endif // YY_EXCEPTIONS
          {
            symbol_type yylookahead (yylex (yyscanner, location));
            yyla.move (yylookahead);
          }
#if YY_EXCEPTIONS
        catch (const syntax_error& yyexc)
          {
            YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
            error (yyexc);
            goto yyerrlab1;
          }
#endif // YY_EXCEPTIONS
      }
    YY_SYMBOL_PRINT ("Next token is", yyla);

    if (yyla.kind () == symbol_kind::S_YYerror)
    {
      // The scanner already issued an error message, process directly
      // to error recovery.  But do not keep the error token as
      // lookahead, it is too special and may lead us to an endless
      // loop in error recovery. */
      yyla.kind_ = symbol_kind::S_YYUNDEF;
      goto yyerrlab1;
    }

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.kind ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.kind ())
      {
        if (!yy_lac_establish_ (yyla.kind ()))
           goto yyerrlab;
        goto yydefault;
      }

    // Reduce or error.
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
        if (yy_table_value_is_error_ (yyn))
          goto yyerrlab;
        if (!yy_lac_establish_ (yyla.kind ()))
           goto yyerrlab;

        yyn = -yyn;
        goto yyreduce;
      }

    // Count tokens shifted since error; after three, turn off error status.
    if (yyerrstatus_)
      --yyerrstatus_;

    // Shift the lookahead token.
    yypush_ ("Shifting", state_type (yyn), YY_MOVE (yyla));
    yy_lac_discard_ ("shift");
    goto yynewstate;


  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[+yystack_[0].state];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;


  /*-----------------------------.
  | yyreduce -- do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_ (yystack_[yylen].state, yyr1_[yyn]);
      /* Variants are always initialized to an empty instance of the
         correct type. The default '$$ = $1' action is NOT applied
         when using variants.  */
      switch (yyr1_[yyn])
    {
      case symbol_kind::S_animref: // animref
        yylhs.value.emplace< gsc::animref_ptr > ();
        break;

      case symbol_kind::S_animtree: // animtree
        yylhs.value.emplace< gsc::animtree_ptr > ();
        break;

      case symbol_kind::S_block: // block
        yylhs.value.emplace< gsc::block_ptr > ();
        break;

      case symbol_kind::S_constant: // constant
        yylhs.value.emplace< gsc::constant_ptr > ();
        break;

      case symbol_kind::S_definition: // definition
        yylhs.value.emplace< gsc::definition_ptr > ();
        break;

      case symbol_kind::S_expr_arguments: // expr_arguments
        yylhs.value.emplace< gsc::expr_arguments_ptr > ();
        break;

      case symbol_kind::S_expr_assign: // expr_assign
        yylhs.value.emplace< gsc::expr_assign_ptr > ();
        break;

      case symbol_kind::S_expr_call: // expr_call
      case symbol_kind::S_expr_call_thread: // expr_call_thread
        yylhs.value.emplace< gsc::expr_call_ptr > ();
        break;

      case symbol_kind::S_expr_call_function: // expr_call_function
      case symbol_kind::S_expr_call_pointer: // expr_call_pointer
        yylhs.value.emplace< gsc::expr_call_type_ptr > ();
        break;

      case symbol_kind::S_for_assign: // for_assign
      case symbol_kind::S_for_cond: // for_cond
      case symbol_kind::S_expr: // expr
      case symbol_kind::S_expr_cmp: // expr_cmp
      case symbol_kind::S_expr_ternary: // expr_ternary
      case symbol_kind::S_expr_binary: // expr_binary
      case symbol_kind::S_expr_primitive: // expr_primitive
        yylhs.value.emplace< gsc::expr_ptr > ();
        break;

      case symbol_kind::S_data_false: // data_false
        yylhs.value.emplace< gsc::false_ptr > ();
        break;

      case symbol_kind::S_filepath: // filepath
        yylhs.value.emplace< gsc::filepath_ptr > ();
        break;

      case symbol_kind::S_data_float: // data_float
        yylhs.value.emplace< gsc::float_ptr > ();
        break;

      case symbol_kind::S_identifier: // identifier
        yylhs.value.emplace< gsc::identifier_ptr > ();
        break;

      case symbol_kind::S_include: // include
        yylhs.value.emplace< gsc::include_ptr > ();
        break;

      case symbol_kind::S_data_integer: // data_integer
        yylhs.value.emplace< gsc::integer_ptr > ();
        break;

      case symbol_kind::S_data_localized_string: // data_localized_string
        yylhs.value.emplace< gsc::localized_string_ptr > ();
        break;

      case symbol_kind::S_expr_function_ref: // expr_function_ref
      case symbol_kind::S_expr_array: // expr_array
      case symbol_kind::S_expr_field: // expr_field
      case symbol_kind::S_expr_size: // expr_size
      case symbol_kind::S_expr_vector: // expr_vector
      case symbol_kind::S_expr_add_array: // expr_add_array
      case symbol_kind::S_object: // object
      case symbol_kind::S_vector: // vector
      case symbol_kind::S_number: // number
      case symbol_kind::S_empty_array: // empty_array
      case symbol_kind::S_undefined: // undefined
      case symbol_kind::S_size: // size
      case symbol_kind::S_game: // game
      case symbol_kind::S_self: // self
      case symbol_kind::S_anim: // anim
      case symbol_kind::S_level: // level
        yylhs.value.emplace< gsc::node_ptr > ();
        break;

      case symbol_kind::S_parameters: // parameters
        yylhs.value.emplace< gsc::parameters_ptr > ();
        break;

      case symbol_kind::S_script: // script
        yylhs.value.emplace< gsc::script_ptr > ();
        break;

      case symbol_kind::S_stmt_assign: // stmt_assign
        yylhs.value.emplace< gsc::stmt_assign_ptr > ();
        break;

      case symbol_kind::S_stmt_break: // stmt_break
        yylhs.value.emplace< gsc::stmt_break_ptr > ();
        break;

      case symbol_kind::S_stmt_call: // stmt_call
        yylhs.value.emplace< gsc::stmt_call_ptr > ();
        break;

      case symbol_kind::S_stmt_case: // stmt_case
        yylhs.value.emplace< gsc::stmt_case_ptr > ();
        break;

      case symbol_kind::S_stmt_continue: // stmt_continue
        yylhs.value.emplace< gsc::stmt_continue_ptr > ();
        break;

      case symbol_kind::S_stmt_default: // stmt_default
        yylhs.value.emplace< gsc::stmt_default_ptr > ();
        break;

      case symbol_kind::S_stmt_endon: // stmt_endon
        yylhs.value.emplace< gsc::stmt_endon_ptr > ();
        break;

      case symbol_kind::S_stmt_for: // stmt_for
        yylhs.value.emplace< gsc::stmt_for_ptr > ();
        break;

      case symbol_kind::S_stmt_foreach: // stmt_foreach
        yylhs.value.emplace< gsc::stmt_foreach_ptr > ();
        break;

      case symbol_kind::S_stmt_if: // stmt_if
        yylhs.value.emplace< gsc::stmt_if_ptr > ();
        break;

      case symbol_kind::S_stmt_ifelse: // stmt_ifelse
        yylhs.value.emplace< gsc::stmt_ifelse_ptr > ();
        break;

      case symbol_kind::S_stmt_notify: // stmt_notify
        yylhs.value.emplace< gsc::stmt_notify_ptr > ();
        break;

      case symbol_kind::S_stmt: // stmt
        yylhs.value.emplace< gsc::stmt_ptr > ();
        break;

      case symbol_kind::S_stmt_return: // stmt_return
        yylhs.value.emplace< gsc::stmt_return_ptr > ();
        break;

      case symbol_kind::S_stmt_switch: // stmt_switch
        yylhs.value.emplace< gsc::stmt_switch_ptr > ();
        break;

      case symbol_kind::S_stmt_wait: // stmt_wait
        yylhs.value.emplace< gsc::stmt_wait_ptr > ();
        break;

      case symbol_kind::S_stmt_waitframe: // stmt_waitframe
        yylhs.value.emplace< gsc::stmt_waitframe_ptr > ();
        break;

      case symbol_kind::S_stmt_waittill: // stmt_waittill
        yylhs.value.emplace< gsc::stmt_waittill_ptr > ();
        break;

      case symbol_kind::S_stmt_waittillframeend: // stmt_waittillframeend
        yylhs.value.emplace< gsc::stmt_waittillframeend_ptr > ();
        break;

      case symbol_kind::S_stmt_waittillmatch: // stmt_waittillmatch
        yylhs.value.emplace< gsc::stmt_waittillmatch_ptr > ();
        break;

      case symbol_kind::S_stmt_while: // stmt_while
        yylhs.value.emplace< gsc::stmt_while_ptr > ();
        break;

      case symbol_kind::S_data_string: // data_string
        yylhs.value.emplace< gsc::string_ptr > ();
        break;

      case symbol_kind::S_thread: // thread
        yylhs.value.emplace< gsc::thread_ptr > ();
        break;

      case symbol_kind::S_data_true: // data_true
        yylhs.value.emplace< gsc::true_ptr > ();
        break;

      case symbol_kind::S_using_animtree: // using_animtree
        yylhs.value.emplace< gsc::using_animtree_ptr > ();
        break;

      case symbol_kind::S_FILEPATH: // FILEPATH
      case symbol_kind::S_IDENTIFIER: // IDENTIFIER
      case symbol_kind::S_ANIMREF: // ANIMREF
      case symbol_kind::S_STRING: // STRING
      case symbol_kind::S_STRING_LOC: // STRING_LOC
      case symbol_kind::S_FLOAT: // FLOAT
      case symbol_kind::S_INTEGER: // INTEGER
        yylhs.value.emplace< std::string > ();
        break;

      default:
        break;
    }



      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
#if YY_EXCEPTIONS
      try
#endif // YY_EXCEPTIONS
        {
          switch (yyn)
            {
  case 2: // root: script
#line 122 "S1.parser.ypp"
                 { astout = std::move(yystack_[0].value.as < gsc::script_ptr > ()); }
#line 1589 "./S1/compiler_parser.cpp"
    break;

  case 3: // root: %empty
#line 123 "S1.parser.ypp"
                 { astout = std::make_unique<gsc::node_script>(); }
#line 1595 "./S1/compiler_parser.cpp"
    break;

  case 4: // script: script include
#line 128 "S1.parser.ypp"
                { yylhs.value.as < gsc::script_ptr > () = std::move(yystack_[1].value.as < gsc::script_ptr > ()); yylhs.value.as < gsc::script_ptr > ()->includes.push_back(std::move(yystack_[0].value.as < gsc::include_ptr > ())); }
#line 1601 "./S1/compiler_parser.cpp"
    break;

  case 5: // script: script definition
#line 130 "S1.parser.ypp"
                { yylhs.value.as < gsc::script_ptr > () = std::move(yystack_[1].value.as < gsc::script_ptr > ()); yylhs.value.as < gsc::script_ptr > ()->definitions.push_back(std::move(yystack_[0].value.as < gsc::definition_ptr > ())); }
#line 1607 "./S1/compiler_parser.cpp"
    break;

  case 6: // script: include
#line 132 "S1.parser.ypp"
                { yylhs.value.as < gsc::script_ptr > () = std::make_unique<gsc::node_script>(std::to_string(*location)); yylhs.value.as < gsc::script_ptr > ()->includes.push_back(std::move(yystack_[0].value.as < gsc::include_ptr > ()));}
#line 1613 "./S1/compiler_parser.cpp"
    break;

  case 7: // script: definition
#line 134 "S1.parser.ypp"
                { yylhs.value.as < gsc::script_ptr > () = std::make_unique<gsc::node_script>(std::to_string(*location)); yylhs.value.as < gsc::script_ptr > ()->definitions.push_back(std::move(yystack_[0].value.as < gsc::definition_ptr > ()));}
#line 1619 "./S1/compiler_parser.cpp"
    break;

  case 8: // include: INCLUDE filepath SEMICOLON
#line 139 "S1.parser.ypp"
                { yylhs.value.as < gsc::include_ptr > () = std::make_unique<gsc::node_include>(std::to_string(*location), std::move(yystack_[1].value.as < gsc::filepath_ptr > ())); }
#line 1625 "./S1/compiler_parser.cpp"
    break;

  case 9: // definition: using_animtree
#line 143 "S1.parser.ypp"
                                                                        { yylhs.value.as < gsc::definition_ptr > ().as_using_animtree = std::move(yystack_[0].value.as < gsc::using_animtree_ptr > ()); }
#line 1631 "./S1/compiler_parser.cpp"
    break;

  case 10: // definition: constant
#line 144 "S1.parser.ypp"
                                                                                { yylhs.value.as < gsc::definition_ptr > ().as_constant = std::move(yystack_[0].value.as < gsc::constant_ptr > ()); }
#line 1637 "./S1/compiler_parser.cpp"
    break;

  case 11: // definition: thread
#line 145 "S1.parser.ypp"
                                                                                { yylhs.value.as < gsc::definition_ptr > ().as_thread = std::move(yystack_[0].value.as < gsc::thread_ptr > ()); }
#line 1643 "./S1/compiler_parser.cpp"
    break;

  case 12: // using_animtree: USING_ANIMTREE LPAREN data_string RPAREN SEMICOLON
#line 150 "S1.parser.ypp"
                { yylhs.value.as < gsc::using_animtree_ptr > () = std::make_unique<gsc::node_using_animtree>(std::to_string(*location), std::move(yystack_[2].value.as < gsc::string_ptr > ())); }
#line 1649 "./S1/compiler_parser.cpp"
    break;

  case 13: // constant: identifier ASSIGN expr SEMICOLON
#line 155 "S1.parser.ypp"
                { yylhs.value.as < gsc::constant_ptr > () = std::make_unique<gsc::node_constant>(std::to_string(*location), std::move(yystack_[3].value.as < gsc::identifier_ptr > ()), std::move(yystack_[1].value.as < gsc::expr_ptr > ())); }
#line 1655 "./S1/compiler_parser.cpp"
    break;

  case 14: // thread: identifier LPAREN parameters RPAREN LBRACE block RBRACE
#line 160 "S1.parser.ypp"
                { yylhs.value.as < gsc::thread_ptr > () = std::make_unique<gsc::node_thread>(std::to_string(*location), std::move(yystack_[6].value.as < gsc::identifier_ptr > ()), std::move(yystack_[4].value.as < gsc::parameters_ptr > ()), std::move(yystack_[1].value.as < gsc::block_ptr > ())); }
#line 1661 "./S1/compiler_parser.cpp"
    break;

  case 15: // parameters: parameters COMMA identifier
#line 165 "S1.parser.ypp"
                { yylhs.value.as < gsc::parameters_ptr > () = std::move(yystack_[2].value.as < gsc::parameters_ptr > ()); yylhs.value.as < gsc::parameters_ptr > ()->list.push_back(std::move(yystack_[0].value.as < gsc::identifier_ptr > ())); }
#line 1667 "./S1/compiler_parser.cpp"
    break;

  case 16: // parameters: identifier
#line 167 "S1.parser.ypp"
                { yylhs.value.as < gsc::parameters_ptr > () = std::make_unique<gsc::node_parameters>(std::to_string(*location)); yylhs.value.as < gsc::parameters_ptr > ()->list.push_back(std::move(yystack_[0].value.as < gsc::identifier_ptr > ())); }
#line 1673 "./S1/compiler_parser.cpp"
    break;

  case 17: // parameters: %empty
#line 169 "S1.parser.ypp"
                { yylhs.value.as < gsc::parameters_ptr > () = std::make_unique<gsc::node_parameters>(std::to_string(*location)); }
#line 1679 "./S1/compiler_parser.cpp"
    break;

  case 18: // block: block stmt
#line 174 "S1.parser.ypp"
                { yylhs.value.as < gsc::block_ptr > () = std::move(yystack_[1].value.as < gsc::block_ptr > ()); yylhs.value.as < gsc::block_ptr > ()->stmts.push_back(std::move(yystack_[0].value.as < gsc::stmt_ptr > ())); }
#line 1685 "./S1/compiler_parser.cpp"
    break;

  case 19: // block: stmt
#line 176 "S1.parser.ypp"
                { yylhs.value.as < gsc::block_ptr > () = std::make_unique<gsc::node_block>(std::to_string(*location)); yylhs.value.as < gsc::block_ptr > ()->stmts.push_back(std::move(yystack_[0].value.as < gsc::stmt_ptr > ())); }
#line 1691 "./S1/compiler_parser.cpp"
    break;

  case 20: // block: %empty
#line 178 "S1.parser.ypp"
                { yylhs.value.as < gsc::block_ptr > () = std::make_unique<gsc::node_block>(std::to_string(*location)); }
#line 1697 "./S1/compiler_parser.cpp"
    break;

  case 21: // stmt: stmt_call
#line 182 "S1.parser.ypp"
                                                                                { yylhs.value.as < gsc::stmt_ptr > ().as_call = std::move(yystack_[0].value.as < gsc::stmt_call_ptr > ()); }
#line 1703 "./S1/compiler_parser.cpp"
    break;

  case 22: // stmt: stmt_assign
#line 183 "S1.parser.ypp"
                                                                                { yylhs.value.as < gsc::stmt_ptr > ().as_assign = std::move(yystack_[0].value.as < gsc::stmt_assign_ptr > ()); }
#line 1709 "./S1/compiler_parser.cpp"
    break;

  case 23: // stmt: stmt_endon
#line 184 "S1.parser.ypp"
                                                                                { yylhs.value.as < gsc::stmt_ptr > ().as_endon = std::move(yystack_[0].value.as < gsc::stmt_endon_ptr > ()); }
#line 1715 "./S1/compiler_parser.cpp"
    break;

  case 24: // stmt: stmt_notify
#line 185 "S1.parser.ypp"
                                                                                { yylhs.value.as < gsc::stmt_ptr > ().as_notify = std::move(yystack_[0].value.as < gsc::stmt_notify_ptr > ()); }
#line 1721 "./S1/compiler_parser.cpp"
    break;

  case 25: // stmt: stmt_wait
#line 186 "S1.parser.ypp"
                                                                                { yylhs.value.as < gsc::stmt_ptr > ().as_wait = std::move(yystack_[0].value.as < gsc::stmt_wait_ptr > ()); }
#line 1727 "./S1/compiler_parser.cpp"
    break;

  case 26: // stmt: stmt_waittill
#line 187 "S1.parser.ypp"
                                                                                { yylhs.value.as < gsc::stmt_ptr > ().as_waittill = std::move(yystack_[0].value.as < gsc::stmt_waittill_ptr > ()); }
#line 1733 "./S1/compiler_parser.cpp"
    break;

  case 27: // stmt: stmt_waittillmatch
#line 188 "S1.parser.ypp"
                                                                        { yylhs.value.as < gsc::stmt_ptr > ().as_waittillmatch = std::move(yystack_[0].value.as < gsc::stmt_waittillmatch_ptr > ()); }
#line 1739 "./S1/compiler_parser.cpp"
    break;

  case 28: // stmt: stmt_waittillframeend
#line 189 "S1.parser.ypp"
                                                                        { yylhs.value.as < gsc::stmt_ptr > ().as_waittillframeend = std::move(yystack_[0].value.as < gsc::stmt_waittillframeend_ptr > ()); }
#line 1745 "./S1/compiler_parser.cpp"
    break;

  case 29: // stmt: stmt_waitframe
#line 190 "S1.parser.ypp"
                                                                            { yylhs.value.as < gsc::stmt_ptr > ().as_waitframe = std::move(yystack_[0].value.as < gsc::stmt_waitframe_ptr > ()); }
#line 1751 "./S1/compiler_parser.cpp"
    break;

  case 30: // stmt: stmt_if
#line 191 "S1.parser.ypp"
                                                                                        { yylhs.value.as < gsc::stmt_ptr > ().as_if = std::move(yystack_[0].value.as < gsc::stmt_if_ptr > ()); }
#line 1757 "./S1/compiler_parser.cpp"
    break;

  case 31: // stmt: stmt_ifelse
#line 192 "S1.parser.ypp"
                                                                                { yylhs.value.as < gsc::stmt_ptr > ().as_ifelse = std::move(yystack_[0].value.as < gsc::stmt_ifelse_ptr > ()); }
#line 1763 "./S1/compiler_parser.cpp"
    break;

  case 32: // stmt: stmt_while
#line 193 "S1.parser.ypp"
                                                                                { yylhs.value.as < gsc::stmt_ptr > ().as_while = std::move(yystack_[0].value.as < gsc::stmt_while_ptr > ()); }
#line 1769 "./S1/compiler_parser.cpp"
    break;

  case 33: // stmt: stmt_for
#line 194 "S1.parser.ypp"
                                                                                        { yylhs.value.as < gsc::stmt_ptr > ().as_for = std::move(yystack_[0].value.as < gsc::stmt_for_ptr > ()); }
#line 1775 "./S1/compiler_parser.cpp"
    break;

  case 34: // stmt: stmt_foreach
#line 195 "S1.parser.ypp"
                                                                                { yylhs.value.as < gsc::stmt_ptr > ().as_foreach = std::move(yystack_[0].value.as < gsc::stmt_foreach_ptr > ()); }
#line 1781 "./S1/compiler_parser.cpp"
    break;

  case 35: // stmt: stmt_switch
#line 196 "S1.parser.ypp"
                                                                                { yylhs.value.as < gsc::stmt_ptr > ().as_switch = std::move(yystack_[0].value.as < gsc::stmt_switch_ptr > ()); }
#line 1787 "./S1/compiler_parser.cpp"
    break;

  case 36: // stmt: stmt_case
#line 197 "S1.parser.ypp"
                                                                                        { yylhs.value.as < gsc::stmt_ptr > ().as_case = std::move(yystack_[0].value.as < gsc::stmt_case_ptr > ()); }
#line 1793 "./S1/compiler_parser.cpp"
    break;

  case 37: // stmt: stmt_default
#line 198 "S1.parser.ypp"
                                                                                { yylhs.value.as < gsc::stmt_ptr > ().as_default = std::move(yystack_[0].value.as < gsc::stmt_default_ptr > ()); }
#line 1799 "./S1/compiler_parser.cpp"
    break;

  case 38: // stmt: stmt_break
#line 199 "S1.parser.ypp"
                                                                                { yylhs.value.as < gsc::stmt_ptr > ().as_break = std::move(yystack_[0].value.as < gsc::stmt_break_ptr > ()); }
#line 1805 "./S1/compiler_parser.cpp"
    break;

  case 39: // stmt: stmt_continue
#line 200 "S1.parser.ypp"
                                                                                { yylhs.value.as < gsc::stmt_ptr > ().as_continue = std::move(yystack_[0].value.as < gsc::stmt_continue_ptr > ()); }
#line 1811 "./S1/compiler_parser.cpp"
    break;

  case 40: // stmt: stmt_return
#line 201 "S1.parser.ypp"
                                                                                { yylhs.value.as < gsc::stmt_ptr > ().as_return = std::move(yystack_[0].value.as < gsc::stmt_return_ptr > ()); }
#line 1817 "./S1/compiler_parser.cpp"
    break;

  case 41: // stmt_call: expr_call SEMICOLON
#line 206 "S1.parser.ypp"
                { yylhs.value.as < gsc::stmt_call_ptr > () = std::make_unique<gsc::node_stmt_call>(std::to_string(*location), std::move(yystack_[1].value.as < gsc::expr_call_ptr > ())); }
#line 1823 "./S1/compiler_parser.cpp"
    break;

  case 42: // stmt_call: expr_call_thread SEMICOLON
#line 208 "S1.parser.ypp"
                { yylhs.value.as < gsc::stmt_call_ptr > () = std::make_unique<gsc::node_stmt_call>(std::to_string(*location), std::move(yystack_[1].value.as < gsc::expr_call_ptr > ())); }
#line 1829 "./S1/compiler_parser.cpp"
    break;

  case 43: // stmt_assign: expr_assign SEMICOLON
#line 213 "S1.parser.ypp"
                { yylhs.value.as < gsc::stmt_assign_ptr > () = std::make_unique<gsc::node_stmt_assign>(std::to_string(*location), std::move(yystack_[1].value.as < gsc::expr_assign_ptr > ())); }
#line 1835 "./S1/compiler_parser.cpp"
    break;

  case 44: // stmt_endon: object ENDON LPAREN expr RPAREN SEMICOLON
#line 218 "S1.parser.ypp"
                { yylhs.value.as < gsc::stmt_endon_ptr > () = std::make_unique<gsc::node_stmt_endon>(std::to_string(*location), std::move(yystack_[5].value.as < gsc::node_ptr > ()), std::move(yystack_[2].value.as < gsc::expr_ptr > ())); }
#line 1841 "./S1/compiler_parser.cpp"
    break;

  case 45: // stmt_notify: object NOTIFY LPAREN expr COMMA expr_arguments RPAREN SEMICOLON
#line 223 "S1.parser.ypp"
                { yylhs.value.as < gsc::stmt_notify_ptr > () = std::make_unique<gsc::node_stmt_notify>(std::to_string(*location), std::move(yystack_[7].value.as < gsc::node_ptr > ()), std::move(yystack_[4].value.as < gsc::expr_ptr > ()), std::move(yystack_[2].value.as < gsc::expr_arguments_ptr > ())); }
#line 1847 "./S1/compiler_parser.cpp"
    break;

  case 46: // stmt_notify: object NOTIFY LPAREN expr RPAREN SEMICOLON
#line 225 "S1.parser.ypp"
                { yylhs.value.as < gsc::stmt_notify_ptr > () = std::make_unique<gsc::node_stmt_notify>(std::to_string(*location), std::move(yystack_[5].value.as < gsc::node_ptr > ()), std::move(yystack_[2].value.as < gsc::expr_ptr > ()), std::make_unique<gsc::node_expr_arguments>(std::to_string(*location))); }
#line 1853 "./S1/compiler_parser.cpp"
    break;

  case 47: // stmt_wait: WAIT LPAREN expr RPAREN SEMICOLON
#line 230 "S1.parser.ypp"
                { yylhs.value.as < gsc::stmt_wait_ptr > () = std::make_unique<gsc::node_stmt_wait>(std::to_string(*location), std::move(yystack_[2].value.as < gsc::expr_ptr > ())); }
#line 1859 "./S1/compiler_parser.cpp"
    break;

  case 48: // stmt_wait: WAIT number SEMICOLON
#line 232 "S1.parser.ypp"
                { yylhs.value.as < gsc::stmt_wait_ptr > () = std::make_unique<gsc::node_stmt_wait>(std::to_string(*location), std::move(yystack_[1].value.as < gsc::node_ptr > ())); }
#line 1865 "./S1/compiler_parser.cpp"
    break;

  case 49: // stmt_waittill: object WAITTILL LPAREN expr COMMA expr_arguments RPAREN SEMICOLON
#line 237 "S1.parser.ypp"
                { yylhs.value.as < gsc::stmt_waittill_ptr > () = std::make_unique<gsc::node_stmt_waittill>(std::to_string(*location), std::move(yystack_[7].value.as < gsc::node_ptr > ()), std::move(yystack_[4].value.as < gsc::expr_ptr > ()), std::move(yystack_[2].value.as < gsc::expr_arguments_ptr > ())); }
#line 1871 "./S1/compiler_parser.cpp"
    break;

  case 50: // stmt_waittill: object WAITTILL LPAREN expr RPAREN SEMICOLON
#line 239 "S1.parser.ypp"
                { yylhs.value.as < gsc::stmt_waittill_ptr > () = std::make_unique<gsc::node_stmt_waittill>(std::to_string(*location), std::move(yystack_[5].value.as < gsc::node_ptr > ()), std::move(yystack_[2].value.as < gsc::expr_ptr > ()), std::make_unique<gsc::node_expr_arguments>(std::to_string(*location))); }
#line 1877 "./S1/compiler_parser.cpp"
    break;

  case 51: // stmt_waittillmatch: object WAITTILLMATCH LPAREN expr COMMA expr RPAREN SEMICOLON
#line 244 "S1.parser.ypp"
                { yylhs.value.as < gsc::stmt_waittillmatch_ptr > () = std::make_unique<gsc::node_stmt_waittillmatch>(std::to_string(*location), std::move(yystack_[7].value.as < gsc::node_ptr > ()), std::move(yystack_[4].value.as < gsc::expr_ptr > ()), std::move(yystack_[2].value.as < gsc::expr_ptr > ())); }
#line 1883 "./S1/compiler_parser.cpp"
    break;

  case 52: // stmt_waittillframeend: WAITTILLFRAMEEND SEMICOLON
#line 249 "S1.parser.ypp"
                { yylhs.value.as < gsc::stmt_waittillframeend_ptr > () = std::make_unique<gsc::node_stmt_waittillframeend>(std::to_string(*location)); }
#line 1889 "./S1/compiler_parser.cpp"
    break;

  case 53: // stmt_waitframe: WAITFRAME SEMICOLON
#line 254 "S1.parser.ypp"
                { yylhs.value.as < gsc::stmt_waitframe_ptr > () = std::make_unique<gsc::node_stmt_waitframe>(std::to_string(*location)); }
#line 1895 "./S1/compiler_parser.cpp"
    break;

  case 54: // stmt_if: IF LPAREN expr RPAREN LBRACE block RBRACE
#line 259 "S1.parser.ypp"
                { yylhs.value.as < gsc::stmt_if_ptr > () = std::make_unique<gsc::node_stmt_if>(std::to_string(*location), std::move(yystack_[4].value.as < gsc::expr_ptr > ()), std::move(yystack_[1].value.as < gsc::block_ptr > ())); }
#line 1901 "./S1/compiler_parser.cpp"
    break;

  case 55: // stmt_if: IF LPAREN expr RPAREN stmt
#line 261 "S1.parser.ypp"
                {
			auto blk = std::make_unique<gsc::node_block>(std::to_string(*location));
			blk->stmts.push_back(std::move(yystack_[0].value.as < gsc::stmt_ptr > ()));
			yylhs.value.as < gsc::stmt_if_ptr > () = std::make_unique<gsc::node_stmt_if>(std::to_string(*location), std::move(yystack_[2].value.as < gsc::expr_ptr > ()), std::move(blk)); }
#line 1910 "./S1/compiler_parser.cpp"
    break;

  case 56: // stmt_ifelse: IF LPAREN expr RPAREN LBRACE block RBRACE ELSE LBRACE block RBRACE
#line 269 "S1.parser.ypp"
                { yylhs.value.as < gsc::stmt_ifelse_ptr > () = std::make_unique<gsc::node_stmt_ifelse>(std::to_string(*location), std::move(yystack_[8].value.as < gsc::expr_ptr > ()), std::move(yystack_[5].value.as < gsc::block_ptr > ()), std::move(yystack_[1].value.as < gsc::block_ptr > ())); }
#line 1916 "./S1/compiler_parser.cpp"
    break;

  case 57: // stmt_ifelse: IF LPAREN expr RPAREN stmt ELSE LBRACE block RBRACE
#line 271 "S1.parser.ypp"
                {
			auto blk = std::make_unique<gsc::node_block>(std::to_string(*location));
			blk->stmts.push_back(std::move(yystack_[4].value.as < gsc::stmt_ptr > ()));
			yylhs.value.as < gsc::stmt_ifelse_ptr > () = std::make_unique<gsc::node_stmt_ifelse>(std::to_string(*location), std::move(yystack_[6].value.as < gsc::expr_ptr > ()), std::move(blk), std::move(yystack_[1].value.as < gsc::block_ptr > ())); }
#line 1925 "./S1/compiler_parser.cpp"
    break;

  case 58: // stmt_ifelse: IF LPAREN expr RPAREN LBRACE block RBRACE ELSE stmt
#line 276 "S1.parser.ypp"
                { 
			auto blk = std::make_unique<gsc::node_block>(std::to_string(*location));
			blk->stmts.push_back(std::move(yystack_[0].value.as < gsc::stmt_ptr > ()));
			yylhs.value.as < gsc::stmt_ifelse_ptr > () = std::make_unique<gsc::node_stmt_ifelse>(std::to_string(*location), std::move(yystack_[6].value.as < gsc::expr_ptr > ()), std::move(yystack_[3].value.as < gsc::block_ptr > ()), std::move(blk)); }
#line 1934 "./S1/compiler_parser.cpp"
    break;

  case 59: // stmt_ifelse: IF LPAREN expr RPAREN stmt ELSE stmt
#line 281 "S1.parser.ypp"
                {
			auto blk1 = std::make_unique<gsc::node_block>(std::to_string(*location));
			blk1->stmts.push_back(std::move(yystack_[2].value.as < gsc::stmt_ptr > ()));
			auto blk2 = std::make_unique<gsc::node_block>(std::to_string(*location));
			blk2->stmts.push_back(std::move(yystack_[0].value.as < gsc::stmt_ptr > ()));
			yylhs.value.as < gsc::stmt_ifelse_ptr > () = std::make_unique<gsc::node_stmt_ifelse>(std::to_string(*location), std::move(yystack_[4].value.as < gsc::expr_ptr > ()), std::move(blk1), std::move(blk2)); }
#line 1945 "./S1/compiler_parser.cpp"
    break;

  case 60: // stmt_while: WHILE LPAREN expr RPAREN LBRACE block RBRACE
#line 291 "S1.parser.ypp"
                { yylhs.value.as < gsc::stmt_while_ptr > () = std::make_unique<gsc::node_stmt_while>(std::to_string(*location), std::move(yystack_[4].value.as < gsc::expr_ptr > ()), std::move(yystack_[1].value.as < gsc::block_ptr > ())); }
#line 1951 "./S1/compiler_parser.cpp"
    break;

  case 61: // stmt_while: WHILE LPAREN expr RPAREN stmt
#line 293 "S1.parser.ypp"
                {
			auto blk = std::make_unique<gsc::node_block>(std::to_string(*location));
			blk->stmts.push_back(std::move(yystack_[0].value.as < gsc::stmt_ptr > ()));
			yylhs.value.as < gsc::stmt_while_ptr > () = std::make_unique<gsc::node_stmt_while>(std::to_string(*location), std::move(yystack_[2].value.as < gsc::expr_ptr > ()), std::move(blk)); }
#line 1960 "./S1/compiler_parser.cpp"
    break;

  case 62: // stmt_for: FOR LPAREN for_assign SEMICOLON for_cond SEMICOLON for_assign RPAREN LBRACE block RBRACE
#line 301 "S1.parser.ypp"
                { yylhs.value.as < gsc::stmt_for_ptr > () = std::make_unique<gsc::node_stmt_for>(std::to_string(*location), std::move(yystack_[8].value.as < gsc::expr_ptr > ()), std::move(yystack_[6].value.as < gsc::expr_ptr > ()), std::move(yystack_[4].value.as < gsc::expr_ptr > ()), std::move(yystack_[1].value.as < gsc::block_ptr > ())); }
#line 1966 "./S1/compiler_parser.cpp"
    break;

  case 63: // stmt_for: FOR LPAREN for_assign SEMICOLON for_cond SEMICOLON for_assign RPAREN stmt
#line 303 "S1.parser.ypp"
                {
			auto blk = std::make_unique<gsc::node_block>(std::to_string(*location));
			blk->stmts.push_back(std::move(yystack_[0].value.as < gsc::stmt_ptr > ()));
			yylhs.value.as < gsc::stmt_for_ptr > () = std::make_unique<gsc::node_stmt_for>(std::to_string(*location), std::move(yystack_[6].value.as < gsc::expr_ptr > ()), std::move(yystack_[4].value.as < gsc::expr_ptr > ()), std::move(yystack_[2].value.as < gsc::expr_ptr > ()), std::move(blk));
		}
#line 1976 "./S1/compiler_parser.cpp"
    break;

  case 64: // stmt_foreach: FOREACH LPAREN identifier IN expr RPAREN LBRACE block RBRACE
#line 312 "S1.parser.ypp"
                { yylhs.value.as < gsc::stmt_foreach_ptr > () = std::make_unique<gsc::node_stmt_foreach>(std::to_string(*location), std::move(yystack_[6].value.as < gsc::identifier_ptr > ()), std::move(yystack_[4].value.as < gsc::expr_ptr > ()), std::move(yystack_[1].value.as < gsc::block_ptr > ())); }
#line 1982 "./S1/compiler_parser.cpp"
    break;

  case 65: // stmt_foreach: FOREACH LPAREN identifier COMMA identifier IN expr RPAREN LBRACE block RBRACE
#line 314 "S1.parser.ypp"
                { yylhs.value.as < gsc::stmt_foreach_ptr > () = std::make_unique<gsc::node_stmt_foreach>(std::to_string(*location), std::move(yystack_[8].value.as < gsc::identifier_ptr > ()), std::move(yystack_[6].value.as < gsc::identifier_ptr > ()), std::move(yystack_[4].value.as < gsc::expr_ptr > ()), std::move(yystack_[1].value.as < gsc::block_ptr > ())); }
#line 1988 "./S1/compiler_parser.cpp"
    break;

  case 66: // stmt_foreach: FOREACH LPAREN identifier IN expr RPAREN stmt
#line 316 "S1.parser.ypp"
                {
			auto blk = std::make_unique<gsc::node_block>(std::to_string(*location));
			blk->stmts.push_back(std::move(yystack_[0].value.as < gsc::stmt_ptr > ()));
			yylhs.value.as < gsc::stmt_foreach_ptr > () = std::make_unique<gsc::node_stmt_foreach>(std::to_string(*location), std::move(yystack_[4].value.as < gsc::identifier_ptr > ()), std::move(yystack_[2].value.as < gsc::expr_ptr > ()), std::move(blk));
		}
#line 1998 "./S1/compiler_parser.cpp"
    break;

  case 67: // stmt_foreach: FOREACH LPAREN identifier COMMA identifier IN expr RPAREN stmt
#line 322 "S1.parser.ypp"
                {
			auto blk = std::make_unique<gsc::node_block>(std::to_string(*location));
			blk->stmts.push_back(std::move(yystack_[0].value.as < gsc::stmt_ptr > ()));
			yylhs.value.as < gsc::stmt_foreach_ptr > () = std::make_unique<gsc::node_stmt_foreach>(std::to_string(*location), std::move(yystack_[6].value.as < gsc::identifier_ptr > ()), std::move(yystack_[4].value.as < gsc::identifier_ptr > ()), std::move(yystack_[2].value.as < gsc::expr_ptr > ()), std::move(blk));
		}
#line 2008 "./S1/compiler_parser.cpp"
    break;

  case 68: // stmt_switch: SWITCH LPAREN expr RPAREN LBRACE block RBRACE
#line 331 "S1.parser.ypp"
                { yylhs.value.as < gsc::stmt_switch_ptr > () = std::make_unique<gsc::node_stmt_switch>(std::to_string(*location), std::move(yystack_[4].value.as < gsc::expr_ptr > ()), std::move(yystack_[1].value.as < gsc::block_ptr > ())); }
#line 2014 "./S1/compiler_parser.cpp"
    break;

  case 69: // stmt_case: CASE data_integer COLON
#line 336 "S1.parser.ypp"
                { yylhs.value.as < gsc::stmt_case_ptr > () = std::make_unique<gsc::node_stmt_case>(std::to_string(*location), gsc::expr_ptr(std::move(yystack_[1].value.as < gsc::integer_ptr > ()))); }
#line 2020 "./S1/compiler_parser.cpp"
    break;

  case 70: // stmt_case: CASE data_string COLON
#line 338 "S1.parser.ypp"
                { yylhs.value.as < gsc::stmt_case_ptr > () = std::make_unique<gsc::node_stmt_case>(std::to_string(*location), gsc::expr_ptr(std::move(yystack_[1].value.as < gsc::string_ptr > ()))); }
#line 2026 "./S1/compiler_parser.cpp"
    break;

  case 71: // stmt_default: DEFAULT COLON
#line 343 "S1.parser.ypp"
                { yylhs.value.as < gsc::stmt_default_ptr > () = std::make_unique<gsc::node_stmt_default>(std::to_string(*location)); }
#line 2032 "./S1/compiler_parser.cpp"
    break;

  case 72: // stmt_break: BREAK SEMICOLON
#line 348 "S1.parser.ypp"
                { yylhs.value.as < gsc::stmt_break_ptr > () = std::make_unique<gsc::node_stmt_break>(std::to_string(*location)); }
#line 2038 "./S1/compiler_parser.cpp"
    break;

  case 73: // stmt_continue: CONTINUE SEMICOLON
#line 352 "S1.parser.ypp"
                { yylhs.value.as < gsc::stmt_continue_ptr > () = std::make_unique<gsc::node_stmt_continue>(std::to_string(*location)); }
#line 2044 "./S1/compiler_parser.cpp"
    break;

  case 74: // stmt_return: RETURN expr SEMICOLON
#line 357 "S1.parser.ypp"
                { yylhs.value.as < gsc::stmt_return_ptr > () = std::make_unique<gsc::node_stmt_return>(std::to_string(*location), std::move(yystack_[1].value.as < gsc::expr_ptr > ())); }
#line 2050 "./S1/compiler_parser.cpp"
    break;

  case 75: // stmt_return: RETURN SEMICOLON
#line 359 "S1.parser.ypp"
                { yylhs.value.as < gsc::stmt_return_ptr > () = std::make_unique<gsc::node_stmt_return>(std::to_string(*location), std::make_unique<gsc::node>()); }
#line 2056 "./S1/compiler_parser.cpp"
    break;

  case 76: // for_assign: expr_assign
#line 363 "S1.parser.ypp"
                                                                { yylhs.value.as < gsc::expr_ptr > ().as_node = std::move(yystack_[0].value.as < gsc::expr_assign_ptr > ()); }
#line 2062 "./S1/compiler_parser.cpp"
    break;

  case 77: // for_assign: %empty
#line 364 "S1.parser.ypp"
                                                                                { yylhs.value.as < gsc::expr_ptr > ().as_node = std::make_unique<gsc::node>(); }
#line 2068 "./S1/compiler_parser.cpp"
    break;

  case 78: // for_cond: expr_cmp
#line 368 "S1.parser.ypp"
                                                                        { yylhs.value.as < gsc::expr_ptr > () = std::move(yystack_[0].value.as < gsc::expr_ptr > ()); }
#line 2074 "./S1/compiler_parser.cpp"
    break;

  case 79: // for_cond: %empty
#line 369 "S1.parser.ypp"
                                                                                { yylhs.value.as < gsc::expr_ptr > ().as_node = std::make_unique<gsc::node>(); }
#line 2080 "./S1/compiler_parser.cpp"
    break;

  case 80: // expr: expr_cmp
#line 373 "S1.parser.ypp"
                                                                        { yylhs.value.as < gsc::expr_ptr > () = std::move(yystack_[0].value.as < gsc::expr_ptr > ()); }
#line 2086 "./S1/compiler_parser.cpp"
    break;

  case 81: // expr: expr_ternary
#line 374 "S1.parser.ypp"
                                                                { yylhs.value.as < gsc::expr_ptr > () = std::move(yystack_[0].value.as < gsc::expr_ptr > ()); }
#line 2092 "./S1/compiler_parser.cpp"
    break;

  case 82: // expr: expr_binary
#line 375 "S1.parser.ypp"
                                                                { yylhs.value.as < gsc::expr_ptr > () = std::move(yystack_[0].value.as < gsc::expr_ptr > ()); }
#line 2098 "./S1/compiler_parser.cpp"
    break;

  case 83: // expr: expr_primitive
#line 376 "S1.parser.ypp"
                                                                { yylhs.value.as < gsc::expr_ptr > () = std::move(yystack_[0].value.as < gsc::expr_ptr > ()); }
#line 2104 "./S1/compiler_parser.cpp"
    break;

  case 84: // expr_assign: object INCREMENT
#line 380 "S1.parser.ypp"
                                                                { yylhs.value.as < gsc::expr_assign_ptr > () = std::make_unique<gsc::node_expr_increment>(std::to_string(*location), std::move(yystack_[1].value.as < gsc::node_ptr > ())); }
#line 2110 "./S1/compiler_parser.cpp"
    break;

  case 85: // expr_assign: object DECREMENT
#line 381 "S1.parser.ypp"
                                                                { yylhs.value.as < gsc::expr_assign_ptr > () = std::make_unique<gsc::node_expr_decrement>(std::to_string(*location), std::move(yystack_[1].value.as < gsc::node_ptr > ())); }
#line 2116 "./S1/compiler_parser.cpp"
    break;

  case 86: // expr_assign: object ASSIGN expr
#line 382 "S1.parser.ypp"
                                                        { yylhs.value.as < gsc::expr_assign_ptr > () = std::make_unique<gsc::node_expr_assign_equal>(std::to_string(*location), std::move(yystack_[2].value.as < gsc::node_ptr > ()), std::move(yystack_[0].value.as < gsc::expr_ptr > ())); }
#line 2122 "./S1/compiler_parser.cpp"
    break;

  case 87: // expr_assign: object ASSIGN_BITWISE_OR expr
#line 383 "S1.parser.ypp"
                                                { yylhs.value.as < gsc::expr_assign_ptr > () = std::make_unique<gsc::node_expr_assign_bitwise_or>(std::to_string(*location), std::move(yystack_[2].value.as < gsc::node_ptr > ()), std::move(yystack_[0].value.as < gsc::expr_ptr > ())); }
#line 2128 "./S1/compiler_parser.cpp"
    break;

  case 88: // expr_assign: object ASSIGN_BITWISE_AND expr
#line 384 "S1.parser.ypp"
                                                { yylhs.value.as < gsc::expr_assign_ptr > () = std::make_unique<gsc::node_expr_assign_bitwise_and>(std::to_string(*location), std::move(yystack_[2].value.as < gsc::node_ptr > ()), std::move(yystack_[0].value.as < gsc::expr_ptr > ())); }
#line 2134 "./S1/compiler_parser.cpp"
    break;

  case 89: // expr_assign: object ASSIGN_BITWISE_EXOR expr
#line 385 "S1.parser.ypp"
                                                { yylhs.value.as < gsc::expr_assign_ptr > () = std::make_unique<gsc::node_expr_assign_bitwise_exor>(std::to_string(*location), std::move(yystack_[2].value.as < gsc::node_ptr > ()), std::move(yystack_[0].value.as < gsc::expr_ptr > ())); }
#line 2140 "./S1/compiler_parser.cpp"
    break;

  case 90: // expr_assign: object ASSIGN_LSHIFT expr
#line 386 "S1.parser.ypp"
                                                        { yylhs.value.as < gsc::expr_assign_ptr > () = std::make_unique<gsc::node_expr_assign_shift_left>(std::to_string(*location), std::move(yystack_[2].value.as < gsc::node_ptr > ()),std::move( yystack_[0].value.as < gsc::expr_ptr > ())); }
#line 2146 "./S1/compiler_parser.cpp"
    break;

  case 91: // expr_assign: object ASSIGN_RSHIFT expr
#line 387 "S1.parser.ypp"
                                                { yylhs.value.as < gsc::expr_assign_ptr > () = std::make_unique<gsc::node_expr_assign_shift_right>(std::to_string(*location), std::move(yystack_[2].value.as < gsc::node_ptr > ()), std::move(yystack_[0].value.as < gsc::expr_ptr > ())); }
#line 2152 "./S1/compiler_parser.cpp"
    break;

  case 92: // expr_assign: object ASSIGN_ADD expr
#line 388 "S1.parser.ypp"
                                                        { yylhs.value.as < gsc::expr_assign_ptr > () = std::make_unique<gsc::node_expr_assign_add>(std::to_string(*location), std::move(yystack_[2].value.as < gsc::node_ptr > ()), std::move(yystack_[0].value.as < gsc::expr_ptr > ())); }
#line 2158 "./S1/compiler_parser.cpp"
    break;

  case 93: // expr_assign: object ASSIGN_SUB expr
#line 389 "S1.parser.ypp"
                                                        { yylhs.value.as < gsc::expr_assign_ptr > () = std::make_unique<gsc::node_expr_assign_sub>(std::to_string(*location), std::move(yystack_[2].value.as < gsc::node_ptr > ()), std::move(yystack_[0].value.as < gsc::expr_ptr > ())); }
#line 2164 "./S1/compiler_parser.cpp"
    break;

  case 94: // expr_assign: object ASSIGN_MULT expr
#line 390 "S1.parser.ypp"
                                                        { yylhs.value.as < gsc::expr_assign_ptr > () = std::make_unique<gsc::node_expr_assign_mult>(std::to_string(*location), std::move(yystack_[2].value.as < gsc::node_ptr > ()), std::move(yystack_[0].value.as < gsc::expr_ptr > ())); }
#line 2170 "./S1/compiler_parser.cpp"
    break;

  case 95: // expr_assign: object ASSIGN_DIV expr
#line 391 "S1.parser.ypp"
                                                        { yylhs.value.as < gsc::expr_assign_ptr > () = std::make_unique<gsc::node_expr_assign_div>(std::to_string(*location), std::move(yystack_[2].value.as < gsc::node_ptr > ()), std::move(yystack_[0].value.as < gsc::expr_ptr > ())); }
#line 2176 "./S1/compiler_parser.cpp"
    break;

  case 96: // expr_assign: object ASSIGN_MOD expr
#line 392 "S1.parser.ypp"
                                                        { yylhs.value.as < gsc::expr_assign_ptr > () = std::make_unique<gsc::node_expr_assign_mod>(std::to_string(*location), std::move(yystack_[2].value.as < gsc::node_ptr > ()), std::move(yystack_[0].value.as < gsc::expr_ptr > ())); }
#line 2182 "./S1/compiler_parser.cpp"
    break;

  case 97: // expr_cmp: expr OR expr
#line 396 "S1.parser.ypp"
                                                                { yylhs.value.as < gsc::expr_ptr > ().as_node = std::make_unique<gsc::node_expr_or>(std::to_string(*location), std::move(yystack_[2].value.as < gsc::expr_ptr > ()), std::move(yystack_[0].value.as < gsc::expr_ptr > ())); }
#line 2188 "./S1/compiler_parser.cpp"
    break;

  case 98: // expr_cmp: expr AND expr
#line 397 "S1.parser.ypp"
                                                                { yylhs.value.as < gsc::expr_ptr > ().as_node = std::make_unique<gsc::node_expr_and>(std::to_string(*location), std::move(yystack_[2].value.as < gsc::expr_ptr > ()), std::move(yystack_[0].value.as < gsc::expr_ptr > ())); }
#line 2194 "./S1/compiler_parser.cpp"
    break;

  case 99: // expr_cmp: expr EQUALITY expr
#line 398 "S1.parser.ypp"
                                                        { yylhs.value.as < gsc::expr_ptr > ().as_node = std::make_unique<gsc::node_expr_equality>(std::to_string(*location), std::move(yystack_[2].value.as < gsc::expr_ptr > ()), std::move(yystack_[0].value.as < gsc::expr_ptr > ())); }
#line 2200 "./S1/compiler_parser.cpp"
    break;

  case 100: // expr_cmp: expr INEQUALITY expr
#line 399 "S1.parser.ypp"
                                                        { yylhs.value.as < gsc::expr_ptr > ().as_node = std::make_unique<gsc::node_expr_inequality>(std::to_string(*location), std::move(yystack_[2].value.as < gsc::expr_ptr > ()), std::move(yystack_[0].value.as < gsc::expr_ptr > ())); }
#line 2206 "./S1/compiler_parser.cpp"
    break;

  case 101: // expr_cmp: expr LESS_EQUAL expr
#line 400 "S1.parser.ypp"
                                                        { yylhs.value.as < gsc::expr_ptr > ().as_node = std::make_unique<gsc::node_expr_less_equal>(std::to_string(*location), std::move(yystack_[2].value.as < gsc::expr_ptr > ()), std::move(yystack_[0].value.as < gsc::expr_ptr > ())); }
#line 2212 "./S1/compiler_parser.cpp"
    break;

  case 102: // expr_cmp: expr GREATER_EQUAL expr
#line 401 "S1.parser.ypp"
                                                        { yylhs.value.as < gsc::expr_ptr > ().as_node = std::make_unique<gsc::node_expr_greater_equal>(std::to_string(*location), std::move(yystack_[2].value.as < gsc::expr_ptr > ()), std::move(yystack_[0].value.as < gsc::expr_ptr > ())); }
#line 2218 "./S1/compiler_parser.cpp"
    break;

  case 103: // expr_cmp: expr LESS expr
#line 402 "S1.parser.ypp"
                                                                { yylhs.value.as < gsc::expr_ptr > ().as_node = std::make_unique<gsc::node_expr_less>(std::to_string(*location), std::move(yystack_[2].value.as < gsc::expr_ptr > ()), std::move(yystack_[0].value.as < gsc::expr_ptr > ())); }
#line 2224 "./S1/compiler_parser.cpp"
    break;

  case 104: // expr_cmp: expr GREATER expr
#line 403 "S1.parser.ypp"
                                                                { yylhs.value.as < gsc::expr_ptr > ().as_node = std::make_unique<gsc::node_expr_greater>(std::to_string(*location), std::move(yystack_[2].value.as < gsc::expr_ptr > ()), std::move(yystack_[0].value.as < gsc::expr_ptr > ())); }
#line 2230 "./S1/compiler_parser.cpp"
    break;

  case 105: // expr_ternary: expr_cmp QMARK expr COLON expr
#line 407 "S1.parser.ypp"
                                                { yylhs.value.as < gsc::expr_ptr > ().as_node = std::make_unique<gsc::node_expr_ternary>(std::to_string(*location), std::move(yystack_[4].value.as < gsc::expr_ptr > ()), std::move(yystack_[2].value.as < gsc::expr_ptr > ()), std::move(yystack_[0].value.as < gsc::expr_ptr > ())); }
#line 2236 "./S1/compiler_parser.cpp"
    break;

  case 106: // expr_binary: expr BITWISE_OR expr
#line 411 "S1.parser.ypp"
                                                        { yylhs.value.as < gsc::expr_ptr > ().as_node = std::make_unique<gsc::node_expr_bitwise_or>(std::to_string(*location), std::move(yystack_[2].value.as < gsc::expr_ptr > ()), std::move(yystack_[0].value.as < gsc::expr_ptr > ())); }
#line 2242 "./S1/compiler_parser.cpp"
    break;

  case 107: // expr_binary: expr BITWISE_AND expr
#line 412 "S1.parser.ypp"
                                                        { yylhs.value.as < gsc::expr_ptr > ().as_node = std::make_unique<gsc::node_expr_bitwise_and>(std::to_string(*location), std::move(yystack_[2].value.as < gsc::expr_ptr > ()), std::move(yystack_[0].value.as < gsc::expr_ptr > ())); }
#line 2248 "./S1/compiler_parser.cpp"
    break;

  case 108: // expr_binary: expr BITWISE_EXOR expr
#line 413 "S1.parser.ypp"
                                                        { yylhs.value.as < gsc::expr_ptr > ().as_node = std::make_unique<gsc::node_expr_bitwise_exor>(std::to_string(*location), std::move(yystack_[2].value.as < gsc::expr_ptr > ()), std::move(yystack_[0].value.as < gsc::expr_ptr > ())); }
#line 2254 "./S1/compiler_parser.cpp"
    break;

  case 109: // expr_binary: expr LSHIFT expr
#line 414 "S1.parser.ypp"
                                                                { yylhs.value.as < gsc::expr_ptr > ().as_node = std::make_unique<gsc::node_expr_shift_left>(std::to_string(*location), std::move(yystack_[2].value.as < gsc::expr_ptr > ()), std::move(yystack_[0].value.as < gsc::expr_ptr > ())); }
#line 2260 "./S1/compiler_parser.cpp"
    break;

  case 110: // expr_binary: expr RSHIFT expr
#line 415 "S1.parser.ypp"
                                                                { yylhs.value.as < gsc::expr_ptr > ().as_node = std::make_unique<gsc::node_expr_shift_right>(std::to_string(*location), std::move(yystack_[2].value.as < gsc::expr_ptr > ()), std::move(yystack_[0].value.as < gsc::expr_ptr > ())); }
#line 2266 "./S1/compiler_parser.cpp"
    break;

  case 111: // expr_binary: expr ADD expr
#line 416 "S1.parser.ypp"
                                                                { yylhs.value.as < gsc::expr_ptr > ().as_node = std::make_unique<gsc::node_expr_add>(std::to_string(*location), std::move(yystack_[2].value.as < gsc::expr_ptr > ()), std::move(yystack_[0].value.as < gsc::expr_ptr > ())); }
#line 2272 "./S1/compiler_parser.cpp"
    break;

  case 112: // expr_binary: expr SUB expr
#line 417 "S1.parser.ypp"
                                                                { yylhs.value.as < gsc::expr_ptr > ().as_node = std::make_unique<gsc::node_expr_sub>(std::to_string(*location), std::move(yystack_[2].value.as < gsc::expr_ptr > ()), std::move(yystack_[0].value.as < gsc::expr_ptr > ())); }
#line 2278 "./S1/compiler_parser.cpp"
    break;

  case 113: // expr_binary: expr MULT expr
#line 418 "S1.parser.ypp"
                                                                { yylhs.value.as < gsc::expr_ptr > ().as_node = std::make_unique<gsc::node_expr_mult>(std::to_string(*location), std::move(yystack_[2].value.as < gsc::expr_ptr > ()), std::move(yystack_[0].value.as < gsc::expr_ptr > ())); }
#line 2284 "./S1/compiler_parser.cpp"
    break;

  case 114: // expr_binary: expr DIV expr
#line 419 "S1.parser.ypp"
                                                                { yylhs.value.as < gsc::expr_ptr > ().as_node = std::make_unique<gsc::node_expr_div>(std::to_string(*location), std::move(yystack_[2].value.as < gsc::expr_ptr > ()), std::move(yystack_[0].value.as < gsc::expr_ptr > ())); }
#line 2290 "./S1/compiler_parser.cpp"
    break;

  case 115: // expr_binary: expr MOD expr
#line 420 "S1.parser.ypp"
                                                                { yylhs.value.as < gsc::expr_ptr > ().as_node = std::make_unique<gsc::node_expr_mod>(std::to_string(*location), std::move(yystack_[2].value.as < gsc::expr_ptr > ()), std::move(yystack_[0].value.as < gsc::expr_ptr > ())); }
#line 2296 "./S1/compiler_parser.cpp"
    break;

  case 116: // expr_primitive: LPAREN expr RPAREN
#line 424 "S1.parser.ypp"
                                                        { yylhs.value.as < gsc::expr_ptr > () = std::move(yystack_[1].value.as < gsc::expr_ptr > ()); }
#line 2302 "./S1/compiler_parser.cpp"
    break;

  case 117: // expr_primitive: COMPLEMENT expr
#line 425 "S1.parser.ypp"
                                                                { yylhs.value.as < gsc::expr_ptr > ().as_node = std::make_unique<gsc::node_expr_complement>(std::to_string(*location), std::move(yystack_[0].value.as < gsc::expr_ptr > ())); }
#line 2308 "./S1/compiler_parser.cpp"
    break;

  case 118: // expr_primitive: NOT expr
#line 426 "S1.parser.ypp"
                                                                        { yylhs.value.as < gsc::expr_ptr > ().as_node = std::make_unique<gsc::node_expr_not>(std::to_string(*location), std::move(yystack_[0].value.as < gsc::expr_ptr > ())); }
#line 2314 "./S1/compiler_parser.cpp"
    break;

  case 119: // expr_primitive: expr_call
#line 427 "S1.parser.ypp"
                                                                        { yylhs.value.as < gsc::expr_ptr > ().as_node = std::move(yystack_[0].value.as < gsc::expr_call_ptr > ()); }
#line 2320 "./S1/compiler_parser.cpp"
    break;

  case 120: // expr_primitive: expr_call_thread
#line 428 "S1.parser.ypp"
                                                                { yylhs.value.as < gsc::expr_ptr > ().as_node = std::move(yystack_[0].value.as < gsc::expr_call_ptr > ()); }
#line 2326 "./S1/compiler_parser.cpp"
    break;

  case 121: // expr_primitive: expr_function_ref
#line 429 "S1.parser.ypp"
                                                                { yylhs.value.as < gsc::expr_ptr > ().as_node = std::move(yystack_[0].value.as < gsc::node_ptr > ()); }
#line 2332 "./S1/compiler_parser.cpp"
    break;

  case 122: // expr_primitive: expr_array
#line 430 "S1.parser.ypp"
                                                                { yylhs.value.as < gsc::expr_ptr > ().as_node = std::move(yystack_[0].value.as < gsc::node_ptr > ()); }
#line 2338 "./S1/compiler_parser.cpp"
    break;

  case 123: // expr_primitive: expr_field
#line 431 "S1.parser.ypp"
                                                                { yylhs.value.as < gsc::expr_ptr > ().as_node = std::move(yystack_[0].value.as < gsc::node_ptr > ()); }
#line 2344 "./S1/compiler_parser.cpp"
    break;

  case 124: // expr_primitive: expr_size
#line 432 "S1.parser.ypp"
                                                                { yylhs.value.as < gsc::expr_ptr > ().as_node = std::move(yystack_[0].value.as < gsc::node_ptr > ()); }
#line 2350 "./S1/compiler_parser.cpp"
    break;

  case 125: // expr_primitive: expr_vector
#line 433 "S1.parser.ypp"
                                                                { yylhs.value.as < gsc::expr_ptr > ().as_node = std::move(yystack_[0].value.as < gsc::node_ptr > ()); }
#line 2356 "./S1/compiler_parser.cpp"
    break;

  case 126: // expr_primitive: expr_add_array
#line 434 "S1.parser.ypp"
                                                                { yylhs.value.as < gsc::expr_ptr > ().as_node = std::move(yystack_[0].value.as < gsc::node_ptr > ()); }
#line 2362 "./S1/compiler_parser.cpp"
    break;

  case 127: // expr_primitive: vector
#line 435 "S1.parser.ypp"
                                                                        { yylhs.value.as < gsc::expr_ptr > ().as_node = std::move(yystack_[0].value.as < gsc::node_ptr > ()); }
#line 2368 "./S1/compiler_parser.cpp"
    break;

  case 128: // expr_primitive: number
#line 436 "S1.parser.ypp"
                                                                        { yylhs.value.as < gsc::expr_ptr > ().as_node = std::move(yystack_[0].value.as < gsc::node_ptr > ()); }
#line 2374 "./S1/compiler_parser.cpp"
    break;

  case 129: // expr_primitive: data_localized_string
#line 437 "S1.parser.ypp"
                                                        { yylhs.value.as < gsc::expr_ptr > ().as_node = std::move(yystack_[0].value.as < gsc::localized_string_ptr > ()); }
#line 2380 "./S1/compiler_parser.cpp"
    break;

  case 130: // expr_primitive: data_string
#line 438 "S1.parser.ypp"
                                                                { yylhs.value.as < gsc::expr_ptr > ().as_node = std::move(yystack_[0].value.as < gsc::string_ptr > ()); }
#line 2386 "./S1/compiler_parser.cpp"
    break;

  case 131: // expr_primitive: data_false
#line 439 "S1.parser.ypp"
                                                                { yylhs.value.as < gsc::expr_ptr > ().as_node = std::move(yystack_[0].value.as < gsc::false_ptr > ()); }
#line 2392 "./S1/compiler_parser.cpp"
    break;

  case 132: // expr_primitive: data_true
#line 440 "S1.parser.ypp"
                                                                { yylhs.value.as < gsc::expr_ptr > ().as_node = std::move(yystack_[0].value.as < gsc::true_ptr > ()); }
#line 2398 "./S1/compiler_parser.cpp"
    break;

  case 133: // expr_primitive: animref
#line 441 "S1.parser.ypp"
                                                                { yylhs.value.as < gsc::expr_ptr > ().as_node = std::move(yystack_[0].value.as < gsc::animref_ptr > ()); }
#line 2404 "./S1/compiler_parser.cpp"
    break;

  case 134: // expr_primitive: animtree
#line 442 "S1.parser.ypp"
                                                                { yylhs.value.as < gsc::expr_ptr > ().as_node = std::move(yystack_[0].value.as < gsc::animtree_ptr > ()); }
#line 2410 "./S1/compiler_parser.cpp"
    break;

  case 135: // expr_primitive: identifier
#line 443 "S1.parser.ypp"
                                                                { yylhs.value.as < gsc::expr_ptr > ().as_node = std::move(yystack_[0].value.as < gsc::identifier_ptr > ()); }
#line 2416 "./S1/compiler_parser.cpp"
    break;

  case 136: // expr_primitive: empty_array
#line 444 "S1.parser.ypp"
                                                                { yylhs.value.as < gsc::expr_ptr > ().as_node = std::move(yystack_[0].value.as < gsc::node_ptr > ()); }
#line 2422 "./S1/compiler_parser.cpp"
    break;

  case 137: // expr_primitive: undefined
#line 445 "S1.parser.ypp"
                                                                        { yylhs.value.as < gsc::expr_ptr > ().as_node = std::move(yystack_[0].value.as < gsc::node_ptr > ()); }
#line 2428 "./S1/compiler_parser.cpp"
    break;

  case 138: // expr_primitive: game
#line 446 "S1.parser.ypp"
                                                                        { yylhs.value.as < gsc::expr_ptr > ().as_node = std::move(yystack_[0].value.as < gsc::node_ptr > ()); }
#line 2434 "./S1/compiler_parser.cpp"
    break;

  case 139: // expr_primitive: self
#line 447 "S1.parser.ypp"
                                                                        { yylhs.value.as < gsc::expr_ptr > ().as_node = std::move(yystack_[0].value.as < gsc::node_ptr > ()); }
#line 2440 "./S1/compiler_parser.cpp"
    break;

  case 140: // expr_primitive: anim
#line 448 "S1.parser.ypp"
                                                                        { yylhs.value.as < gsc::expr_ptr > ().as_node = std::move(yystack_[0].value.as < gsc::node_ptr > ()); }
#line 2446 "./S1/compiler_parser.cpp"
    break;

  case 141: // expr_primitive: level
#line 449 "S1.parser.ypp"
                                                                        { yylhs.value.as < gsc::expr_ptr > ().as_node = std::move(yystack_[0].value.as < gsc::node_ptr > ()); }
#line 2452 "./S1/compiler_parser.cpp"
    break;

  case 142: // expr_call: expr_call_function
#line 453 "S1.parser.ypp"
                                                        { yylhs.value.as < gsc::expr_call_ptr > () = std::make_unique<gsc::node_expr_call>(std::to_string(*location), false, std::make_unique<gsc::node>(), std::move(yystack_[0].value.as < gsc::expr_call_type_ptr > ())); }
#line 2458 "./S1/compiler_parser.cpp"
    break;

  case 143: // expr_call: expr_call_pointer
#line 454 "S1.parser.ypp"
                                                                { yylhs.value.as < gsc::expr_call_ptr > () = std::make_unique<gsc::node_expr_call>(std::to_string(*location), false, std::make_unique<gsc::node>(), std::move(yystack_[0].value.as < gsc::expr_call_type_ptr > ())); }
#line 2464 "./S1/compiler_parser.cpp"
    break;

  case 144: // expr_call: object expr_call_function
#line 455 "S1.parser.ypp"
                                                        { yylhs.value.as < gsc::expr_call_ptr > () = std::make_unique<gsc::node_expr_call>(std::to_string(*location), false, std::move(yystack_[1].value.as < gsc::node_ptr > ()), std::move(yystack_[0].value.as < gsc::expr_call_type_ptr > ())); }
#line 2470 "./S1/compiler_parser.cpp"
    break;

  case 145: // expr_call: object expr_call_pointer
#line 456 "S1.parser.ypp"
                                                        { yylhs.value.as < gsc::expr_call_ptr > () = std::make_unique<gsc::node_expr_call>(std::to_string(*location), false, std::move(yystack_[1].value.as < gsc::node_ptr > ()), std::move(yystack_[0].value.as < gsc::expr_call_type_ptr > ())); }
#line 2476 "./S1/compiler_parser.cpp"
    break;

  case 146: // expr_call_thread: THREAD expr_call_function
#line 460 "S1.parser.ypp"
                                                        { yylhs.value.as < gsc::expr_call_ptr > () = std::make_unique<gsc::node_expr_call>(std::to_string(*location), true, std::make_unique<gsc::node>(), std::move(yystack_[0].value.as < gsc::expr_call_type_ptr > ())); }
#line 2482 "./S1/compiler_parser.cpp"
    break;

  case 147: // expr_call_thread: THREAD expr_call_pointer
#line 461 "S1.parser.ypp"
                                                { yylhs.value.as < gsc::expr_call_ptr > () = std::make_unique<gsc::node_expr_call>(std::to_string(*location), true, std::make_unique<gsc::node>(), std::move(yystack_[0].value.as < gsc::expr_call_type_ptr > ())); }
#line 2488 "./S1/compiler_parser.cpp"
    break;

  case 148: // expr_call_thread: object THREAD expr_call_function
#line 462 "S1.parser.ypp"
                                            { yylhs.value.as < gsc::expr_call_ptr > () = std::make_unique<gsc::node_expr_call>(std::to_string(*location), true, std::move(yystack_[2].value.as < gsc::node_ptr > ()), std::move(yystack_[0].value.as < gsc::expr_call_type_ptr > ())); }
#line 2494 "./S1/compiler_parser.cpp"
    break;

  case 149: // expr_call_thread: object THREAD expr_call_pointer
#line 463 "S1.parser.ypp"
                                                { yylhs.value.as < gsc::expr_call_ptr > () = std::make_unique<gsc::node_expr_call>(std::to_string(*location), true, std::move(yystack_[2].value.as < gsc::node_ptr > ()), std::move(yystack_[0].value.as < gsc::expr_call_type_ptr > ())); }
#line 2500 "./S1/compiler_parser.cpp"
    break;

  case 150: // expr_call_function: identifier LPAREN expr_arguments RPAREN
#line 468 "S1.parser.ypp"
                {yylhs.value.as < gsc::expr_call_type_ptr > ().as_func = std::make_unique<gsc::node_expr_call_function>(std::to_string(*location), std::make_unique<gsc::node_filepath>(std::to_string(*location), ""), std::move(yystack_[3].value.as < gsc::identifier_ptr > ()), std::move(yystack_[1].value.as < gsc::expr_arguments_ptr > ())); }
#line 2506 "./S1/compiler_parser.cpp"
    break;

  case 151: // expr_call_function: filepath DOUBLECOLON identifier LPAREN expr_arguments RPAREN
#line 470 "S1.parser.ypp"
                { yylhs.value.as < gsc::expr_call_type_ptr > ().as_func = std::make_unique<gsc::node_expr_call_function>(std::to_string(*location), std::move(yystack_[5].value.as < gsc::filepath_ptr > ()), std::move(yystack_[3].value.as < gsc::identifier_ptr > ()), std::move(yystack_[1].value.as < gsc::expr_arguments_ptr > ())); }
#line 2512 "./S1/compiler_parser.cpp"
    break;

  case 152: // expr_call_pointer: LBRACKET LBRACKET expr RBRACKET RBRACKET LPAREN expr_arguments RPAREN
#line 475 "S1.parser.ypp"
                { yylhs.value.as < gsc::expr_call_type_ptr > ().as_pointer = std::make_unique<gsc::node_expr_call_pointer>(std::to_string(*location), false, std::move(yystack_[5].value.as < gsc::expr_ptr > ()), std::move(yystack_[1].value.as < gsc::expr_arguments_ptr > ())); }
#line 2518 "./S1/compiler_parser.cpp"
    break;

  case 153: // expr_call_pointer: CALL LBRACKET LBRACKET expr RBRACKET RBRACKET LPAREN expr_arguments RPAREN
#line 477 "S1.parser.ypp"
                { yylhs.value.as < gsc::expr_call_type_ptr > ().as_pointer = std::make_unique<gsc::node_expr_call_pointer>(std::to_string(*location), true, std::move(yystack_[5].value.as < gsc::expr_ptr > ()), std::move(yystack_[1].value.as < gsc::expr_arguments_ptr > ())); }
#line 2524 "./S1/compiler_parser.cpp"
    break;

  case 154: // expr_arguments: expr_arguments COMMA expr
#line 482 "S1.parser.ypp"
                { yylhs.value.as < gsc::expr_arguments_ptr > () = std::move(yystack_[2].value.as < gsc::expr_arguments_ptr > ()); yylhs.value.as < gsc::expr_arguments_ptr > ()->list.push_back(std::move(yystack_[0].value.as < gsc::expr_ptr > ())); }
#line 2530 "./S1/compiler_parser.cpp"
    break;

  case 155: // expr_arguments: expr
#line 484 "S1.parser.ypp"
                { yylhs.value.as < gsc::expr_arguments_ptr > () = std::make_unique<gsc::node_expr_arguments>(std::to_string(*location)); yylhs.value.as < gsc::expr_arguments_ptr > ()->list.push_back(std::move(yystack_[0].value.as < gsc::expr_ptr > ())); }
#line 2536 "./S1/compiler_parser.cpp"
    break;

  case 156: // expr_arguments: %empty
#line 486 "S1.parser.ypp"
                { yylhs.value.as < gsc::expr_arguments_ptr > () = std::make_unique<gsc::node_expr_arguments>(std::to_string(*location)); }
#line 2542 "./S1/compiler_parser.cpp"
    break;

  case 157: // expr_function_ref: DOUBLECOLON identifier
#line 491 "S1.parser.ypp"
                { yylhs.value.as < gsc::node_ptr > () = std::make_unique<gsc::node_expr_function_ref>(std::to_string(*location), std::make_unique<gsc::node_filepath>(std::to_string(*location), ""), std::move(yystack_[0].value.as < gsc::identifier_ptr > ())); }
#line 2548 "./S1/compiler_parser.cpp"
    break;

  case 158: // expr_function_ref: filepath DOUBLECOLON identifier
#line 493 "S1.parser.ypp"
                { yylhs.value.as < gsc::node_ptr > () = std::make_unique<gsc::node_expr_function_ref>(std::to_string(*location), std::move(yystack_[2].value.as < gsc::filepath_ptr > ()), std::move(yystack_[0].value.as < gsc::identifier_ptr > ())); }
#line 2554 "./S1/compiler_parser.cpp"
    break;

  case 159: // expr_array: object LBRACKET expr RBRACKET
#line 498 "S1.parser.ypp"
                { yylhs.value.as < gsc::node_ptr > () = std::make_unique<gsc::node_expr_array>(std::to_string(*location), std::move(yystack_[3].value.as < gsc::node_ptr > ()), std::move(yystack_[1].value.as < gsc::expr_ptr > ())); }
#line 2560 "./S1/compiler_parser.cpp"
    break;

  case 160: // expr_field: object DOT identifier
#line 503 "S1.parser.ypp"
                { yylhs.value.as < gsc::node_ptr > () = std::make_unique<gsc::node_expr_field>(std::to_string(*location), std::move(yystack_[2].value.as < gsc::node_ptr > ()), std::move(yystack_[0].value.as < gsc::identifier_ptr > ())); }
#line 2566 "./S1/compiler_parser.cpp"
    break;

  case 161: // expr_size: object DOT size
#line 508 "S1.parser.ypp"
                { yylhs.value.as < gsc::node_ptr > () = std::make_unique<gsc::node_expr_size>(std::to_string(*location), std::move(yystack_[2].value.as < gsc::node_ptr > ())); }
#line 2572 "./S1/compiler_parser.cpp"
    break;

  case 162: // expr_vector: LPAREN expr COMMA expr COMMA expr RPAREN
#line 513 "S1.parser.ypp"
                { yylhs.value.as < gsc::node_ptr > () = std::make_unique<gsc::node_expr_vector>(std::to_string(*location), std::move(yystack_[5].value.as < gsc::expr_ptr > ()), std::move(yystack_[3].value.as < gsc::expr_ptr > ()), std::move(yystack_[1].value.as < gsc::expr_ptr > ())); }
#line 2578 "./S1/compiler_parser.cpp"
    break;

  case 163: // expr_add_array: LBRACKET expr_arguments RBRACKET
#line 518 "S1.parser.ypp"
                { yylhs.value.as < gsc::node_ptr > () = std::make_unique<gsc::node_expr_add_array>(std::to_string(*location), std::move(yystack_[1].value.as < gsc::expr_arguments_ptr > ())); }
#line 2584 "./S1/compiler_parser.cpp"
    break;

  case 164: // object: expr_call
#line 522 "S1.parser.ypp"
                                { yylhs.value.as < gsc::node_ptr > () = std::move(yystack_[0].value.as < gsc::expr_call_ptr > ()); }
#line 2590 "./S1/compiler_parser.cpp"
    break;

  case 165: // object: expr_array
#line 523 "S1.parser.ypp"
                                { yylhs.value.as < gsc::node_ptr > () = std::move(yystack_[0].value.as < gsc::node_ptr > ()); }
#line 2596 "./S1/compiler_parser.cpp"
    break;

  case 166: // object: expr_field
#line 524 "S1.parser.ypp"
                                { yylhs.value.as < gsc::node_ptr > () = std::move(yystack_[0].value.as < gsc::node_ptr > ()); }
#line 2602 "./S1/compiler_parser.cpp"
    break;

  case 167: // object: identifier
#line 525 "S1.parser.ypp"
                                { yylhs.value.as < gsc::node_ptr > () = std::move(yystack_[0].value.as < gsc::identifier_ptr > ()); }
#line 2608 "./S1/compiler_parser.cpp"
    break;

  case 168: // object: level
#line 526 "S1.parser.ypp"
                                        { yylhs.value.as < gsc::node_ptr > () = std::move(yystack_[0].value.as < gsc::node_ptr > ()); }
#line 2614 "./S1/compiler_parser.cpp"
    break;

  case 169: // object: anim
#line 527 "S1.parser.ypp"
                                        { yylhs.value.as < gsc::node_ptr > () = std::move(yystack_[0].value.as < gsc::node_ptr > ()); }
#line 2620 "./S1/compiler_parser.cpp"
    break;

  case 170: // object: self
#line 528 "S1.parser.ypp"
                                        { yylhs.value.as < gsc::node_ptr > () = std::move(yystack_[0].value.as < gsc::node_ptr > ()); }
#line 2626 "./S1/compiler_parser.cpp"
    break;

  case 171: // object: game
#line 529 "S1.parser.ypp"
                                        { yylhs.value.as < gsc::node_ptr > () = std::move(yystack_[0].value.as < gsc::node_ptr > ()); }
#line 2632 "./S1/compiler_parser.cpp"
    break;

  case 172: // vector: LPAREN number COMMA number COMMA number RPAREN
#line 534 "S1.parser.ypp"
                { yylhs.value.as < gsc::node_ptr > () = std::make_unique<gsc::node_vector>(std::to_string(*location), std::move(yystack_[5].value.as < gsc::node_ptr > ()), std::move(yystack_[3].value.as < gsc::node_ptr > ()), std::move(yystack_[1].value.as < gsc::node_ptr > ())); }
#line 2638 "./S1/compiler_parser.cpp"
    break;

  case 173: // number: data_float
#line 538 "S1.parser.ypp"
                                        { yylhs.value.as < gsc::node_ptr > () = std::move(yystack_[0].value.as < gsc::float_ptr > ()); }
#line 2644 "./S1/compiler_parser.cpp"
    break;

  case 174: // number: data_integer
#line 539 "S1.parser.ypp"
                                        { yylhs.value.as < gsc::node_ptr > () = std::move(yystack_[0].value.as < gsc::integer_ptr > ()); }
#line 2650 "./S1/compiler_parser.cpp"
    break;

  case 175: // data_false: FALSE
#line 542 "S1.parser.ypp"
                                { yylhs.value.as < gsc::false_ptr > () = std::make_unique<gsc::node_false>(std::to_string(*location)); }
#line 2656 "./S1/compiler_parser.cpp"
    break;

  case 176: // data_true: TRUE
#line 543 "S1.parser.ypp"
                                        { yylhs.value.as < gsc::true_ptr > () = std::make_unique<gsc::node_true>(std::to_string(*location)); }
#line 2662 "./S1/compiler_parser.cpp"
    break;

  case 177: // data_float: FLOAT
#line 544 "S1.parser.ypp"
                                        { yylhs.value.as < gsc::float_ptr > () = std::make_unique<gsc::node_float>(std::to_string(*location), yystack_[0].value.as < std::string > ()); }
#line 2668 "./S1/compiler_parser.cpp"
    break;

  case 178: // data_integer: INTEGER
#line 545 "S1.parser.ypp"
                                { yylhs.value.as < gsc::integer_ptr > () = std::make_unique<gsc::node_integer>(std::to_string(*location), yystack_[0].value.as < std::string > ()); }
#line 2674 "./S1/compiler_parser.cpp"
    break;

  case 179: // data_localized_string: STRING_LOC
#line 546 "S1.parser.ypp"
                                   { yylhs.value.as < gsc::localized_string_ptr > () = std::make_unique<gsc::node_localized_string>(std::to_string(*location), yystack_[0].value.as < std::string > ()); }
#line 2680 "./S1/compiler_parser.cpp"
    break;

  case 180: // data_string: STRING
#line 547 "S1.parser.ypp"
                                { yylhs.value.as < gsc::string_ptr > () = std::make_unique<gsc::node_string>(std::to_string(*location), yystack_[0].value.as < std::string > ()); }
#line 2686 "./S1/compiler_parser.cpp"
    break;

  case 181: // animref: ANIMREF
#line 548 "S1.parser.ypp"
                                { yylhs.value.as < gsc::animref_ptr > () = std::make_unique<gsc::node_animref>(std::to_string(*location), yystack_[0].value.as < std::string > ()); }
#line 2692 "./S1/compiler_parser.cpp"
    break;

  case 182: // animtree: ANIMTREE
#line 549 "S1.parser.ypp"
                                { yylhs.value.as < gsc::animtree_ptr > () = std::make_unique<gsc::node_animtree>(std::to_string(*location)); }
#line 2698 "./S1/compiler_parser.cpp"
    break;

  case 183: // identifier: IDENTIFIER
#line 550 "S1.parser.ypp"
                                { yylhs.value.as < gsc::identifier_ptr > () = std::make_unique<gsc::node_identifier>(std::to_string(*location), yystack_[0].value.as < std::string > ()); }
#line 2704 "./S1/compiler_parser.cpp"
    break;

  case 184: // filepath: FILEPATH
#line 551 "S1.parser.ypp"
                                        { yylhs.value.as < gsc::filepath_ptr > () = std::make_unique<gsc::node_filepath>(std::to_string(*location), yystack_[0].value.as < std::string > ()); }
#line 2710 "./S1/compiler_parser.cpp"
    break;

  case 185: // empty_array: EMPTY_ARRAY
#line 552 "S1.parser.ypp"
                                { yylhs.value.as < gsc::node_ptr > () = std::make_unique<gsc::node_empty_array>(std::to_string(*location)); }
#line 2716 "./S1/compiler_parser.cpp"
    break;

  case 186: // undefined: UNDEFINED
#line 553 "S1.parser.ypp"
                                { yylhs.value.as < gsc::node_ptr > () = std::make_unique<gsc::node_undefined>(std::to_string(*location)); }
#line 2722 "./S1/compiler_parser.cpp"
    break;

  case 187: // size: SIZE
#line 554 "S1.parser.ypp"
                                        { yylhs.value.as < gsc::node_ptr > () = std::make_unique<gsc::node_size>(std::to_string(*location)); }
#line 2728 "./S1/compiler_parser.cpp"
    break;

  case 188: // game: GAME
#line 555 "S1.parser.ypp"
                                        { yylhs.value.as < gsc::node_ptr > () = std::make_unique<gsc::node_game>(std::to_string(*location)); }
#line 2734 "./S1/compiler_parser.cpp"
    break;

  case 189: // self: SELF
#line 556 "S1.parser.ypp"
                                        { yylhs.value.as < gsc::node_ptr > () = std::make_unique<gsc::node_self>(std::to_string(*location)); }
#line 2740 "./S1/compiler_parser.cpp"
    break;

  case 190: // anim: ANIM
#line 557 "S1.parser.ypp"
                                        { yylhs.value.as < gsc::node_ptr > () = std::make_unique<gsc::node_anim>(std::to_string(*location)); }
#line 2746 "./S1/compiler_parser.cpp"
    break;

  case 191: // level: LEVEL
#line 558 "S1.parser.ypp"
                                        { yylhs.value.as < gsc::node_ptr > () = std::make_unique<gsc::node_level>(std::to_string(*location)); }
#line 2752 "./S1/compiler_parser.cpp"
    break;


#line 2756 "./S1/compiler_parser.cpp"

            default:
              break;
            }
        }
#if YY_EXCEPTIONS
      catch (const syntax_error& yyexc)
        {
          YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
          error (yyexc);
          YYERROR;
        }
#endif // YY_EXCEPTIONS
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;

      // Shift the result of the reduction.
      yypush_ (YY_NULLPTR, YY_MOVE (yylhs));
    }
    goto yynewstate;


  /*--------------------------------------.
  | yyerrlab -- here on detecting error.  |
  `--------------------------------------*/
  yyerrlab:
    // If not already recovering from an error, report this error.
    if (!yyerrstatus_)
      {
        ++yynerrs_;
        context yyctx (*this, yyla);
        std::string msg = yysyntax_error_ (yyctx);
        error (YY_MOVE (msg));
      }


    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.kind () == symbol_kind::S_YYEOF)
          YYABORT;
        else if (!yyla.empty ())
          {
            yy_destroy_ ("Error: discarding", yyla);
            yyla.clear ();
          }
      }

    // Else will try to reuse lookahead token after shifting the error token.
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:
    /* Pacify compilers when the user code never invokes YYERROR and
       the label yyerrorlab therefore never appears in user code.  */
    if (false)
      YYERROR;

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    YY_STACK_PRINT ();
    goto yyerrlab1;


  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    // Pop stack until we find a state that shifts the error token.
    for (;;)
      {
        yyn = yypact_[+yystack_[0].state];
        if (!yy_pact_value_is_default_ (yyn))
          {
            yyn += symbol_kind::S_YYerror;
            if (0 <= yyn && yyn <= yylast_
                && yycheck_[yyn] == symbol_kind::S_YYerror)
              {
                yyn = yytable_[yyn];
                if (0 < yyn)
                  break;
              }
          }

        // Pop the current state because it cannot handle the error token.
        if (yystack_.size () == 1)
          YYABORT;

        yy_destroy_ ("Error: popping", yystack_[0]);
        yypop_ ();
        YY_STACK_PRINT ();
      }
    {
      stack_symbol_type error_token;


      // Shift the error token.
      yy_lac_discard_ ("error recovery");
      error_token.state = state_type (yyn);
      yypush_ ("Shifting", YY_MOVE (error_token));
    }
    goto yynewstate;


  /*-------------------------------------.
  | yyacceptlab -- YYACCEPT comes here.  |
  `-------------------------------------*/
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;


  /*-----------------------------------.
  | yyabortlab -- YYABORT comes here.  |
  `-----------------------------------*/
  yyabortlab:
    yyresult = 1;
    goto yyreturn;


  /*-----------------------------------------------------.
  | yyreturn -- parsing is finished, return the result.  |
  `-----------------------------------------------------*/
  yyreturn:
    if (!yyla.empty ())
      yy_destroy_ ("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    YY_STACK_PRINT ();
    while (1 < yystack_.size ())
      {
        yy_destroy_ ("Cleanup: popping", yystack_[0]);
        yypop_ ();
      }

    return yyresult;
  }
#if YY_EXCEPTIONS
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack\n";
        // Do not try to display the values of the reclaimed symbols,
        // as their printers might throw an exception.
        if (!yyla.empty ())
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
#endif // YY_EXCEPTIONS
  }

  void
  parser::error (const syntax_error& yyexc)
  {
    error (yyexc.what ());
  }

  const char *
  parser::symbol_name (symbol_kind_type yysymbol)
  {
    static const char *const yy_sname[] =
    {
    "end of file", "error", "invalid token", "INCLUDE", "USING_ANIMTREE",
  "ANIMTREE", "IF", "ELSE", "SWITCH", "CASE", "DEFAULT", "BREAK", "FOR",
  "FOREACH", "WHILE", "CONTINUE", "RETURN", "THREAD", "CALL", "WAIT",
  "WAITTILL", "WAITTILLMATCH", "WAITTILLFRAMEEND", "WAITFRAME", "ENDON",
  "NOTIFY", "IN", "UNDEFINED", "TRUE", "FALSE", "SIZE", "GAME", "LEVEL",
  "ANIM", "SELF", "EMPTY_ARRAY", "LPAREN", "RPAREN", "LBRACE", "RBRACE",
  "LBRACKET", "RBRACKET", "COMMA", "DOT", "DOUBLECOLON", "COLON",
  "SEMICOLON", "QMARK", "MOD", "INCREMENT", "DECREMENT", "LSHIFT",
  "RSHIFT", "OR", "AND", "EQUALITY", "INEQUALITY", "LESS_EQUAL",
  "GREATER_EQUAL", "LESS", "GREATER", "ASSIGN", "ASSIGN_ADD", "ASSIGN_SUB",
  "ASSIGN_MULT", "ASSIGN_DIV", "ASSIGN_MOD", "ASSIGN_BITWISE_OR",
  "ASSIGN_BITWISE_AND", "ASSIGN_BITWISE_EXOR", "ASSIGN_LSHIFT",
  "ASSIGN_RSHIFT", "BITWISE_OR", "BITWISE_AND", "BITWISE_EXOR", "ADD",
  "SUB", "MULT", "DIV", "NOT", "COMPLEMENT", "FILEPATH", "IDENTIFIER",
  "ANIMREF", "STRING", "STRING_LOC", "FLOAT", "INTEGER", "IFX", "$accept",
  "root", "script", "include", "definition", "using_animtree", "constant",
  "thread", "parameters", "block", "stmt", "stmt_call", "stmt_assign",
  "stmt_endon", "stmt_notify", "stmt_wait", "stmt_waittill",
  "stmt_waittillmatch", "stmt_waittillframeend", "stmt_waitframe",
  "stmt_if", "stmt_ifelse", "stmt_while", "stmt_for", "stmt_foreach",
  "stmt_switch", "stmt_case", "stmt_default", "stmt_break",
  "stmt_continue", "stmt_return", "for_assign", "for_cond", "expr",
  "expr_assign", "expr_cmp", "expr_ternary", "expr_binary",
  "expr_primitive", "expr_call", "expr_call_thread", "expr_call_function",
  "expr_call_pointer", "expr_arguments", "expr_function_ref", "expr_array",
  "expr_field", "expr_size", "expr_vector", "expr_add_array", "object",
  "vector", "number", "data_false", "data_true", "data_float",
  "data_integer", "data_localized_string", "data_string", "animref",
  "animtree", "identifier", "filepath", "empty_array", "undefined", "size",
  "game", "self", "anim", "level", YY_NULLPTR
    };
    return yy_sname[yysymbol];
  }



  // parser::context.
  parser::context::context (const parser& yyparser, const symbol_type& yyla)
    : yyparser_ (yyparser)
    , yyla_ (yyla)
  {}

  int
  parser::context::expected_tokens (symbol_kind_type yyarg[], int yyargn) const
  {
    // Actual number of expected tokens
    int yycount = 0;

#if S1DEBUG
    // Execute LAC once. We don't care if it is successful, we
    // only do it for the sake of debugging output.
    if (!yyparser_.yy_lac_established_)
      yyparser_.yy_lac_check_ (yyla_.kind ());
#endif

    for (int yyx = 0; yyx < YYNTOKENS; ++yyx)
      {
        symbol_kind_type yysym = YY_CAST (symbol_kind_type, yyx);
        if (yysym != symbol_kind::S_YYerror
            && yysym != symbol_kind::S_YYUNDEF
            && yyparser_.yy_lac_check_ (yysym))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = yysym;
          }
      }
    if (yyarg && yycount == 0 && 0 < yyargn)
      yyarg[0] = symbol_kind::S_YYEMPTY;
    return yycount;
  }


  bool
  parser::yy_lac_check_ (symbol_kind_type yytoken) const
  {
    // Logically, the yylac_stack's lifetime is confined to this function.
    // Clear it, to get rid of potential left-overs from previous call.
    yylac_stack_.clear ();
    // Reduce until we encounter a shift and thereby accept the token.
#if S1DEBUG
    YYCDEBUG << "LAC: checking lookahead " << symbol_name (yytoken) << ':';
#endif
    std::ptrdiff_t lac_top = 0;
    while (true)
      {
        state_type top_state = (yylac_stack_.empty ()
                                ? yystack_[lac_top].state
                                : yylac_stack_.back ());
        int yyrule = yypact_[+top_state];
        if (yy_pact_value_is_default_ (yyrule)
            || (yyrule += yytoken) < 0 || yylast_ < yyrule
            || yycheck_[yyrule] != yytoken)
          {
            // Use the default action.
            yyrule = yydefact_[+top_state];
            if (yyrule == 0)
              {
                YYCDEBUG << " Err\n";
                return false;
              }
          }
        else
          {
            // Use the action from yytable.
            yyrule = yytable_[yyrule];
            if (yy_table_value_is_error_ (yyrule))
              {
                YYCDEBUG << " Err\n";
                return false;
              }
            if (0 < yyrule)
              {
                YYCDEBUG << " S" << yyrule << '\n';
                return true;
              }
            yyrule = -yyrule;
          }
        // By now we know we have to simulate a reduce.
        YYCDEBUG << " R" << yyrule - 1;
        // Pop the corresponding number of values from the stack.
        {
          std::ptrdiff_t yylen = yyr2_[yyrule];
          // First pop from the LAC stack as many tokens as possible.
          std::ptrdiff_t lac_size = std::ptrdiff_t (yylac_stack_.size ());
          if (yylen < lac_size)
            {
              yylac_stack_.resize (std::size_t (lac_size - yylen));
              yylen = 0;
            }
          else if (lac_size)
            {
              yylac_stack_.clear ();
              yylen -= lac_size;
            }
          // Only afterwards look at the main stack.
          // We simulate popping elements by incrementing lac_top.
          lac_top += yylen;
        }
        // Keep top_state in sync with the updated stack.
        top_state = (yylac_stack_.empty ()
                     ? yystack_[lac_top].state
                     : yylac_stack_.back ());
        // Push the resulting state of the reduction.
        state_type state = yy_lr_goto_state_ (top_state, yyr1_[yyrule]);
        YYCDEBUG << " G" << int (state);
        yylac_stack_.push_back (state);
      }
  }

  // Establish the initial context if no initial context currently exists.
  bool
  parser::yy_lac_establish_ (symbol_kind_type yytoken)
  {
    /* Establish the initial context for the current lookahead if no initial
       context is currently established.

       We define a context as a snapshot of the parser stacks.  We define
       the initial context for a lookahead as the context in which the
       parser initially examines that lookahead in order to select a
       syntactic action.  Thus, if the lookahead eventually proves
       syntactically unacceptable (possibly in a later context reached via a
       series of reductions), the initial context can be used to determine
       the exact set of tokens that would be syntactically acceptable in the
       lookahead's place.  Moreover, it is the context after which any
       further semantic actions would be erroneous because they would be
       determined by a syntactically unacceptable token.

       yy_lac_establish_ should be invoked when a reduction is about to be
       performed in an inconsistent state (which, for the purposes of LAC,
       includes consistent states that don't know they're consistent because
       their default reductions have been disabled).

       For parse.lac=full, the implementation of yy_lac_establish_ is as
       follows.  If no initial context is currently established for the
       current lookahead, then check if that lookahead can eventually be
       shifted if syntactic actions continue from the current context.  */
    if (!yy_lac_established_)
      {
#if S1DEBUG
        YYCDEBUG << "LAC: initial context established for "
                 << symbol_name (yytoken) << '\n';
#endif
        yy_lac_established_ = true;
        return yy_lac_check_ (yytoken);
      }
    return true;
  }

  // Discard any previous initial lookahead context.
  void
  parser::yy_lac_discard_ (const char* evt)
  {
   /* Discard any previous initial lookahead context because of Event,
      which may be a lookahead change or an invalidation of the currently
      established initial context for the current lookahead.

      The most common example of a lookahead change is a shift.  An example
      of both cases is syntax error recovery.  That is, a syntax error
      occurs when the lookahead is syntactically erroneous for the
      currently established initial context, so error recovery manipulates
      the parser stacks to try to find a new initial context in which the
      current lookahead is syntactically acceptable.  If it fails to find
      such a context, it discards the lookahead.  */
    if (yy_lac_established_)
      {
        YYCDEBUG << "LAC: initial context discarded due to "
                 << evt << '\n';
        yy_lac_established_ = false;
      }
  }

  int
  parser::yy_syntax_error_arguments_ (const context& yyctx,
                                                 symbol_kind_type yyarg[], int yyargn) const
  {
    /* There are many possibilities here to consider:
       - If this state is a consistent state with a default action, then
         the only way this function was invoked is if the default action
         is an error action.  In that case, don't check for expected
         tokens because there are none.
       - The only way there can be no lookahead present (in yyla) is
         if this state is a consistent state with a default action.
         Thus, detecting the absence of a lookahead is sufficient to
         determine that there is no unexpected or expected token to
         report.  In that case, just report a simple "syntax error".
       - Don't assume there isn't a lookahead just because this state is
         a consistent state with a default action.  There might have
         been a previous inconsistent state, consistent state with a
         non-default action, or user semantic action that manipulated
         yyla.  (However, yyla is currently not documented for users.)
         In the first two cases, it might appear that the current syntax
         error should have been detected in the previous state when
         yy_lac_check was invoked.  However, at that time, there might
         have been a different syntax error that discarded a different
         initial context during error recovery, leaving behind the
         current lookahead.
    */

    if (!yyctx.lookahead ().empty ())
      {
        if (yyarg)
          yyarg[0] = yyctx.token ();
        int yyn = yyctx.expected_tokens (yyarg ? yyarg + 1 : yyarg, yyargn - 1);
        return yyn + 1;
      }
    return 0;
  }

  // Generate an error message.
  std::string
  parser::yysyntax_error_ (const context& yyctx) const
  {
    // Its maximum.
    enum { YYARGS_MAX = 5 };
    // Arguments of yyformat.
    symbol_kind_type yyarg[YYARGS_MAX];
    int yycount = yy_syntax_error_arguments_ (yyctx, yyarg, YYARGS_MAX);

    char const* yyformat = YY_NULLPTR;
    switch (yycount)
      {
#define YYCASE_(N, S)                         \
        case N:                               \
          yyformat = S;                       \
        break
      default: // Avoid compiler warnings.
        YYCASE_ (0, YY_("syntax error"));
        YYCASE_ (1, YY_("syntax error, unexpected %s"));
        YYCASE_ (2, YY_("syntax error, unexpected %s, expecting %s"));
        YYCASE_ (3, YY_("syntax error, unexpected %s, expecting %s or %s"));
        YYCASE_ (4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
        YYCASE_ (5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
      }

    std::string yyres;
    // Argument number.
    std::ptrdiff_t yyi = 0;
    for (char const* yyp = yyformat; *yyp; ++yyp)
      if (yyp[0] == '%' && yyp[1] == 's' && yyi < yycount)
        {
          yyres += symbol_name (yyarg[yyi++]);
          ++yyp;
        }
      else
        yyres += *yyp;
    return yyres;
  }


  const short parser::yypact_ninf_ = -220;

  const short parser::yytable_ninf_ = -172;

  const short
  parser::yypact_[] =
  {
       5,   -68,    -9,  -220,    30,     5,  -220,  -220,  -220,  -220,
    -220,   -20,  -220,    -6,   -35,  -220,  -220,  -220,   -30,  1071,
    -220,  -220,    18,     6,  -220,  -220,    16,    29,  -220,  -220,
    -220,  -220,  -220,  -220,  -220,  -220,  1071,  1096,   -30,  1071,
    1071,  -220,  -220,  -220,  -220,  2514,    23,  -220,  -220,  -220,
       2,  -220,  -220,  -220,  -220,     4,    14,  -220,  -220,  -220,
      85,  -220,  -220,  -220,  -220,  -220,  -220,  -220,  -220,  -220,
    -220,    -7,    27,  -220,  -220,   199,   212,   246,   266,    33,
      42,   -30,    48,  -220,  -220,    56,    50,    67,  1896,    68,
    1096,  2578,   -18,  -220,  2578,  2578,  -220,  1071,  1071,  1071,
    1071,  1071,  1071,  1071,  1071,  1071,  1071,  1071,  1071,  1071,
    1071,  1071,  1071,  1071,  1071,  1071,    16,  1096,   -15,  -220,
    -220,  1071,   -30,  -220,  1803,  -220,  1071,   -30,  1071,  -220,
    1071,   -28,  2297,  -220,  1071,  2578,  2578,  2578,  2578,  2578,
    2578,  2578,  2578,  2578,  2578,  2578,  2578,  2578,  2578,  2578,
    2578,  2578,  2578,  2481,  -220,  -220,  2335,  -220,  -220,  -220,
       9,    73,    75,    81,   -70,    74,    77,    93,    97,   106,
      98,   103,     3,    99,   102,  1178,  -220,  -220,  -220,  -220,
    -220,  -220,  -220,  -220,  -220,  -220,  -220,  -220,  -220,  -220,
    -220,  -220,  -220,  -220,  -220,  -220,  -220,   105,   107,   108,
    -220,  -220,  1827,    56,  -220,  -220,  -220,  -220,  2297,    73,
    2373,  2410,   113,   109,  2578,  1071,  -220,  -220,  1071,  1071,
    1071,   111,   112,  -220,  -220,    32,   -30,  1071,  -220,  -220,
    2547,  1071,   114,  -220,  -220,  -220,  -220,  -220,  -220,  -220,
     122,   123,   125,   126,   -30,  -220,  -220,  1071,  1071,  1071,
    1071,  1071,  1071,  1071,  1071,  1071,  1071,  1071,   124,  1071,
     -28,   127,  2578,    31,  2011,  2042,  -220,  -220,   118,  -220,
    -220,  1861,   -14,  2073,  -220,  2104,  -220,  1071,  1071,  1071,
    1071,  2578,  2578,  2578,  2578,  2578,  2578,  2578,  2578,  2578,
    2578,  2578,   133,  2135,   134,  1071,  -220,  1213,   132,  1071,
    1071,   -30,  1258,   128,  1938,  2447,  2166,  1980,  1071,  -220,
    -220,    40,  1803,   165,  1803,   145,  2578,    15,  2197,   147,
    1803,  -220,  -220,   146,  1071,  1071,   149,   150,  1071,    63,
    -220,  1291,  1336,  1369,    32,  1414,  1071,  1447,  -220,    64,
    2228,  -220,  -220,   104,  -220,   171,  1803,  -220,  -220,   143,
    1803,  -220,  2259,  -220,   151,   153,   154,  1492,  1525,  1570,
    1603,  1648,  -220,  -220,  -220,  1803,  -220,  -220,  1803,  -220,
    -220,  1803,  -220,  1681,  1725,  1760,  -220,  -220,  -220
  };

  const unsigned char
  parser::yydefact_[] =
  {
       3,     0,     0,   183,     0,     2,     6,     7,     9,    10,
      11,     0,   184,     0,     0,     1,     4,     5,    17,     0,
       8,   180,     0,     0,    16,   182,     0,     0,   186,   176,
     175,   188,   191,   190,   189,   185,     0,   156,     0,     0,
       0,   181,   179,   177,   178,     0,    80,    81,    82,    83,
     119,   120,   142,   143,   121,   122,   123,   124,   125,   126,
       0,   127,   128,   131,   132,   173,   174,   129,   130,   133,
     134,   135,     0,   136,   137,   138,   139,   140,   141,     0,
       0,     0,     0,   146,   147,     0,     0,     0,     0,   128,
     156,   155,     0,   157,   118,   117,    13,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   144,
     145,   156,     0,    12,    20,    15,     0,     0,     0,   116,
       0,     0,   155,   163,     0,   115,   109,   110,    97,    98,
      99,   100,   101,   102,   103,   104,   106,   107,   108,   111,
     112,   113,   114,     0,   148,   149,     0,   187,   160,   161,
       0,   158,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    19,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,     0,   164,     0,
     165,   166,     0,   167,   171,   170,   169,   168,     0,     0,
       0,     0,     0,     0,   154,     0,   159,   150,   156,     0,
       0,     0,     0,    71,    72,    77,     0,     0,    73,    75,
       0,     0,     0,    52,    53,    14,    18,    43,    41,    42,
       0,     0,     0,     0,     0,    84,    85,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   105,     0,     0,     0,    69,    70,     0,    76,
     164,     0,     0,     0,    74,     0,    48,     0,     0,     0,
       0,    86,    92,    93,    94,    95,    96,    87,    88,    89,
      90,    91,     0,     0,     0,   156,   151,     0,     0,    79,
       0,     0,     0,     0,     0,     0,     0,     0,   156,   162,
     172,     0,    20,    55,    20,     0,     0,    80,     0,     0,
      20,    61,    47,     0,   156,     0,     0,     0,   156,     0,
     152,     0,     0,     0,    77,     0,     0,     0,    50,     0,
       0,    44,    46,     0,   153,    54,    20,    59,    68,     0,
      20,    66,     0,    60,     0,     0,     0,     0,     0,     0,
       0,     0,    49,    51,    45,    20,    58,    57,    20,    63,
      64,    20,    67,     0,     0,     0,    56,    62,    65
  };

  const short
  parser::yypgoto_[] =
  {
    -220,  -220,  -220,   188,   196,  -220,  -220,  -220,  -220,   -47,
     735,  -220,  -220,  -220,  -220,  -220,  -220,  -220,  -220,  -220,
    -220,  -220,  -220,  -220,  -220,  -220,  -220,  -220,  -220,  -220,
    -220,  -130,  -220,   357,  -219,   -94,  -220,  -220,  -220,   -99,
     690,   -25,   -23,  -114,  -220,   176,   327,  -220,  -220,  -220,
     392,  -220,   -32,  -220,  -220,  -220,    43,  -220,   -12,  -220,
    -220,     0,    52,  -220,  -220,  -220,   444,   496,   586,   638
  };

  const short
  parser::yydefgoto_[] =
  {
      -1,     4,     5,     6,     7,     8,     9,    10,    23,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   268,   315,    91,   197,    46,    47,    48,    49,    50,
      51,    52,    53,    92,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,   159,    75,    76,    77,    78
  };

  const short
  parser::yytable_[] =
  {
      11,    83,    22,    84,    89,    11,   269,   160,     1,     2,
    -167,  -167,   300,    12,    21,   157,    18,    44,    24,  -164,
    -164,  -165,  -165,   133,   134,   198,    85,    14,   301,   121,
      15,  -166,  -166,  -167,    27,   119,  -167,   120,    93,   231,
      20,    19,  -164,    80,  -165,  -164,   217,  -165,    81,    21,
      27,   134,     3,    13,  -166,    79,    82,  -166,    43,    44,
      85,   -78,   115,    31,    32,    33,    34,     3,   296,    87,
     115,   122,    82,   134,  -167,  -167,   198,   330,    86,   123,
     124,   125,   134,  -164,  -164,  -165,  -165,     3,   126,    43,
      44,   154,   121,   155,   127,  -166,  -166,    12,     3,   212,
     344,   354,   116,    27,   263,   134,   134,   128,    25,   218,
     131,   219,    86,    12,     3,   269,    85,   220,   158,   223,
      26,    27,   161,   224,   203,   117,   270,   209,   118,   225,
      28,    29,    30,   226,    31,    32,    33,    34,    35,    36,
     232,   356,   227,    37,   228,   233,   134,    38,   234,   229,
     261,   237,   222,   238,   239,   260,   266,   267,   277,   278,
     276,   279,   280,   295,   299,   292,    12,     3,    86,   308,
     314,   310,   332,   336,   322,   203,    86,   119,   357,   120,
     359,   311,    39,    40,    12,     3,    41,    21,    42,    43,
      44,   334,   338,    16,   329,   341,   342,   362,   198,   363,
     364,    17,    85,   198,   349,   317,     0,   221,     0,     0,
     339,     0,     0,   198,   343,   198,  -171,  -171,     0,     0,
       0,   198,     0,     0,     0,   203,   272,    86,   294,  -170,
    -170,     0,   198,   198,   198,   270,   198,     0,   198,  -171,
       0,     0,  -171,     0,   158,     0,   119,   198,   120,     0,
       0,   198,  -170,     0,    86,  -170,     0,     0,   198,   198,
     198,   198,   198,  -169,  -169,   331,   198,   333,     0,   198,
       0,    85,   198,   337,   198,   198,   198,    86,     0,     0,
    -171,  -171,     0,  -168,  -168,     0,  -169,     0,     0,  -169,
       0,     0,     0,  -170,  -170,     0,     0,   203,     0,   358,
     200,   319,   203,   360,     0,     0,  -168,     0,     0,  -168,
       0,     0,   203,     0,   203,     0,     0,     0,   373,     0,
     203,   374,     0,    86,   375,     0,     0,  -169,  -169,     0,
       0,   203,   203,   203,   203,   203,     0,   203,     0,     0,
       0,     0,     0,     0,     0,     0,   203,  -168,  -168,    86,
     203,   200,     0,     0,    86,     0,     0,   203,   203,   203,
     203,   203,     0,     0,    86,   203,    86,     0,   203,     0,
       0,   203,    86,   203,   203,   203,    45,     0,     0,     0,
       0,     0,     0,    86,    86,    86,    86,    86,     0,    86,
       0,     0,     0,    88,     0,     0,    94,    95,    86,     0,
       0,   200,    86,     0,     0,     0,     0,     0,     0,    86,
      86,    86,    86,    86,     0,     0,     0,    86,     0,     0,
      86,     0,     0,    86,     0,    86,    86,    86,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   132,     0,     0,
       0,   201,     0,     0,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   200,   156,     0,     0,     0,   200,     0,
       0,     0,     0,   208,     0,   210,     0,   211,   200,     0,
     200,   214,     0,     0,     0,     0,   200,     0,     0,     0,
       0,     0,   201,     0,     0,     0,     0,   200,   200,   200,
     200,   200,     0,   200,     0,     0,   202,     0,     0,     0,
       0,     0,   200,     0,     0,     0,   200,     0,   230,     0,
       0,     0,     0,   200,   200,   200,   200,   200,     0,     0,
       0,   200,     0,     0,   200,     0,     0,   200,     0,   200,
     200,   200,   201,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   202,   204,     0,
       0,     0,   262,     0,     0,     0,   264,   265,     0,     0,
       0,     0,     0,     0,   273,     0,     0,     0,   275,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,     0,   293,   271,     0,   204,
     205,     0,     0,     0,   201,     0,     0,     0,     0,   201,
       0,     0,     0,     0,   304,   305,   306,   307,     0,   201,
       0,   201,     0,     0,     0,     0,     0,   201,     0,     0,
       0,     0,     0,     0,     0,     0,   316,   318,   201,   201,
     201,   201,   201,     0,   201,     0,     0,     0,     0,   204,
       0,   205,     0,   201,     0,     0,     0,   201,     0,     0,
       0,     0,   340,     0,   201,   201,   201,   201,   201,   202,
       0,     0,   201,   352,   202,   201,     0,     0,   201,     0,
     201,   201,   201,     0,   202,     0,   202,     0,     0,     0,
     206,     0,   202,     0,     0,     0,     0,     0,     0,     0,
       0,   205,     0,   202,   202,   202,   271,   202,     0,   202,
       0,     0,     0,     0,     0,     0,     0,     0,   202,     0,
       0,   204,   202,     0,     0,     0,   204,     0,     0,   202,
     202,   202,   202,   202,     0,     0,   204,   202,   204,     0,
     202,   206,   207,   202,   204,   202,   202,   202,     0,     0,
       0,     0,     0,     0,     0,   204,   204,   204,   204,   204,
       0,   204,     0,     0,     0,     0,     0,     0,     0,     0,
     204,     0,     0,   205,   204,     0,     0,     0,   205,     0,
       0,   204,   204,   204,   204,   204,     0,     0,   205,   204,
     205,   206,   204,   207,   199,   204,   205,   204,   204,   204,
       0,     0,     0,     0,     0,     0,     0,   205,   205,   205,
     205,   205,     0,   205,     0,     0,     0,     0,     0,     0,
       0,     0,   205,     0,     0,     0,   205,     0,     0,     0,
       0,     0,     0,   205,   205,   205,   205,   205,     0,     0,
       0,   205,     0,   207,   205,   199,     0,   205,     0,   205,
     205,   205,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   206,     0,     0,     0,     0,   206,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   206,     0,
     206,     0,     0,     0,     0,     0,   206,     0,     0,     0,
     236,     0,     0,     0,     0,     0,     0,   206,   206,   206,
     206,   206,     0,   206,     0,     0,     0,     0,     0,     0,
       0,     0,   206,     0,     0,   207,   206,     0,     0,     0,
     207,     0,     0,   206,   206,   206,   206,   206,     0,     0,
     207,   206,   207,     0,   206,     0,     0,   206,   207,   206,
     206,   206,     0,     0,     0,     0,     0,     0,     0,   207,
     207,   207,   207,   207,     0,   207,     0,     0,     0,     0,
       0,     0,     0,     0,   207,     0,     0,   199,   207,     0,
       0,     0,   199,     0,     0,   207,   207,   207,   207,   207,
       0,     0,   199,   207,   199,     0,   207,     0,     0,   207,
     199,   207,   207,   207,     0,     0,     0,     0,     0,     0,
       0,   199,   199,   199,     0,   199,     0,   199,     0,     0,
       0,     0,   313,     0,     0,     0,   199,   321,     0,     0,
     199,     0,     0,     0,     0,     0,     0,   199,   199,   199,
     199,   199,     0,     0,     0,   199,     0,     0,   199,     0,
       0,   199,     0,   199,   199,   199,   236,   347,   236,     0,
     351,     0,   236,     0,     0,     0,    25,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    26,    27,
       0,     0,   366,   236,   369,   236,   372,     0,    28,    29,
      30,    25,    31,    32,    33,    34,    35,    36,   236,   236,
     236,    37,     0,    26,    27,    38,     0,     0,     0,     0,
       0,     0,     0,    28,    29,    30,     0,    31,    32,    33,
      34,    35,    36,     0,     0,     0,    90,     0,     0,     0,
      38,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      39,    40,    12,     3,    41,    21,    42,    43,    44,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    39,    40,    12,     3,    41,
      21,    42,    43,    44,   162,     0,   163,   164,   165,   166,
     167,   168,   169,   170,   171,    26,    27,   172,     0,     0,
     173,   174,     0,     0,     0,     0,     0,     0,     0,    31,
      32,    33,    34,     0,     0,     0,     0,   235,    82,   162,
       0,   163,   164,   165,   166,   167,   168,   169,   170,   171,
      26,    27,   172,     0,     0,   173,   174,     0,     0,     0,
       0,     0,     0,     0,    31,    32,    33,    34,     0,     0,
       0,   312,     0,    82,     0,     0,     0,     0,     0,    12,
       3,     0,     0,     0,   162,     0,   163,   164,   165,   166,
     167,   168,   169,   170,   171,    26,    27,   172,     0,     0,
     173,   174,     0,     0,     0,     0,     0,     0,     0,    31,
      32,    33,    34,     0,    12,     3,   320,   162,    82,   163,
     164,   165,   166,   167,   168,   169,   170,   171,    26,    27,
     172,     0,     0,   173,   174,     0,     0,     0,     0,     0,
       0,     0,    31,    32,    33,    34,     0,     0,     0,     0,
     345,    82,     0,     0,     0,     0,     0,     0,     0,    12,
       3,     0,   162,     0,   163,   164,   165,   166,   167,   168,
     169,   170,   171,    26,    27,   172,     0,     0,   173,   174,
       0,     0,     0,     0,     0,     0,     0,    31,    32,    33,
      34,     0,    12,     3,   346,   162,    82,   163,   164,   165,
     166,   167,   168,   169,   170,   171,    26,    27,   172,     0,
       0,   173,   174,     0,     0,     0,     0,     0,     0,     0,
      31,    32,    33,    34,     0,     0,     0,     0,   348,    82,
       0,     0,     0,     0,     0,     0,     0,    12,     3,     0,
     162,     0,   163,   164,   165,   166,   167,   168,   169,   170,
     171,    26,    27,   172,     0,     0,   173,   174,     0,     0,
       0,     0,     0,     0,     0,    31,    32,    33,    34,     0,
      12,     3,   350,   162,    82,   163,   164,   165,   166,   167,
     168,   169,   170,   171,    26,    27,   172,     0,     0,   173,
     174,     0,     0,     0,     0,     0,     0,     0,    31,    32,
      33,    34,     0,     0,     0,     0,   353,    82,     0,     0,
       0,     0,     0,     0,     0,    12,     3,     0,   162,     0,
     163,   164,   165,   166,   167,   168,   169,   170,   171,    26,
      27,   172,     0,     0,   173,   174,     0,     0,     0,     0,
       0,     0,     0,    31,    32,    33,    34,     0,    12,     3,
     365,   162,    82,   163,   164,   165,   166,   167,   168,   169,
     170,   171,    26,    27,   172,     0,     0,   173,   174,     0,
       0,     0,     0,     0,     0,     0,    31,    32,    33,    34,
       0,     0,     0,     0,   367,    82,     0,     0,     0,     0,
       0,     0,     0,    12,     3,     0,   162,     0,   163,   164,
     165,   166,   167,   168,   169,   170,   171,    26,    27,   172,
       0,     0,   173,   174,     0,     0,     0,     0,     0,     0,
       0,    31,    32,    33,    34,     0,    12,     3,   368,   162,
      82,   163,   164,   165,   166,   167,   168,   169,   170,   171,
      26,    27,   172,     0,     0,   173,   174,     0,     0,     0,
       0,     0,     0,     0,    31,    32,    33,    34,     0,     0,
       0,     0,   370,    82,     0,     0,     0,     0,     0,     0,
       0,    12,     3,     0,   162,     0,   163,   164,   165,   166,
     167,   168,   169,   170,   171,    26,    27,   172,     0,     0,
     173,   174,     0,     0,     0,     0,     0,     0,     0,    31,
      32,    33,    34,     0,    12,     3,   371,   162,    82,   163,
     164,   165,   166,   167,   168,   169,   170,   171,    26,    27,
     172,     0,     0,   173,   174,     0,     0,     0,     0,     0,
       0,     0,    31,    32,    33,    34,     0,     0,     0,     0,
     376,    82,     0,     0,     0,     0,     0,     0,     0,    12,
       3,   162,     0,   163,   164,   165,   166,   167,   168,   169,
     170,   171,    26,    27,   172,     0,     0,   173,   174,     0,
       0,     0,     0,     0,     0,     0,    31,    32,    33,    34,
       0,     0,    12,     3,   377,    82,   162,     0,   163,   164,
     165,   166,   167,   168,   169,   170,   171,    26,    27,   172,
       0,     0,   173,   174,     0,     0,     0,     0,     0,     0,
       0,    31,    32,    33,    34,     0,     0,     0,     0,   378,
      82,     0,     0,     0,     0,     0,    12,     3,     0,   162,
       0,   163,   164,   165,   166,   167,   168,   169,   170,   171,
      26,    27,   172,     0,     0,   173,   174,     0,     0,     0,
       0,     0,     0,     0,    31,    32,    33,    34,     0,     0,
       0,    12,     3,    82,   116,    27,     0,   240,   241,     0,
       0,   242,   243,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   117,     0,     0,
     244,     0,     0,     0,     0,     0,   245,   246,     0,    27,
       0,     0,     0,     0,    12,     3,     0,     0,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,     0,
       0,   117,     0,     0,   244,     0,     0,     0,    12,     3,
     245,   246,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   129,     0,     0,     0,     0,   130,     0,
       0,     0,    12,     3,    97,     0,     0,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   108,   109,
     110,   111,   112,   113,   114,   323,     0,     0,     0,     0,
     324,     0,     0,     0,     0,     0,    97,     0,     0,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     108,   109,   110,   111,   112,   113,   114,   327,     0,     0,
       0,     0,   328,     0,     0,     0,     0,     0,    97,     0,
       0,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,     0,     0,     0,     0,     0,     0,     0,   297,     0,
       0,     0,   108,   109,   110,   111,   112,   113,   114,    97,
       0,     0,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,     0,     0,     0,     0,     0,     0,     0,   298,
       0,     0,     0,   108,   109,   110,   111,   112,   113,   114,
      97,     0,     0,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,     0,     0,     0,     0,     0,     0,     0,
     302,     0,     0,     0,   108,   109,   110,   111,   112,   113,
     114,    97,     0,     0,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,     0,     0,     0,     0,     0,     0,
       0,   303,     0,     0,     0,   108,   109,   110,   111,   112,
     113,   114,    97,     0,     0,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,     0,     0,     0,     0,     0,
       0,     0,   309,     0,     0,     0,   108,   109,   110,   111,
     112,   113,   114,    97,     0,     0,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,     0,     0,     0,     0,
       0,     0,     0,   326,     0,     0,     0,   108,   109,   110,
     111,   112,   113,   114,    97,     0,     0,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,     0,     0,     0,
       0,     0,     0,     0,   335,     0,     0,     0,   108,   109,
     110,   111,   112,   113,   114,    97,     0,     0,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,     0,     0,
       0,     0,     0,     0,     0,   355,     0,     0,     0,   108,
     109,   110,   111,   112,   113,   114,    97,     0,     0,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,     0,
       0,     0,     0,     0,     0,     0,   361,     0,     0,     0,
     108,   109,   110,   111,   112,   113,   114,    97,     0,     0,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   108,   109,   110,   111,   112,   113,   114,   213,     0,
       0,     0,     0,     0,     0,    97,     0,     0,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   108,
     109,   110,   111,   112,   113,   114,   216,     0,     0,     0,
       0,     0,     0,    97,     0,     0,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   108,   109,   110,
     111,   112,   113,   114,   258,     0,     0,     0,     0,     0,
       0,    97,     0,     0,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   108,   109,   110,   111,   112,
     113,   114,   259,     0,     0,     0,     0,     0,    97,     0,
       0,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   108,   109,   110,   111,   112,   113,   114,   325,
       0,     0,     0,     0,     0,    97,     0,     0,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   108,
     109,   110,   111,   112,   113,   114,   215,     0,     0,    97,
       0,     0,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   108,   109,   110,   111,   112,   113,   114,
      96,     0,    97,     0,     0,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   108,   109,   110,   111,
     112,   113,   114,   274,     0,    97,     0,     0,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   108,
     109,   110,   111,   112,   113,   114,    97,     0,     0,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     108,   109,   110,   111,   112,   113,   114
  };

  const short
  parser::yycheck_[] =
  {
       0,    26,    14,    26,    36,     5,   225,   121,     3,     4,
      17,    18,    26,    81,    84,    30,    36,    87,    18,    17,
      18,    17,    18,    41,    42,   124,    26,    36,    42,    36,
       0,    17,    18,    40,    18,    60,    43,    60,    38,    36,
      46,    61,    40,    37,    40,    43,    37,    43,    42,    84,
      18,    42,    82,     1,    40,    37,    40,    43,    86,    87,
      60,    46,    47,    31,    32,    33,    34,    82,    37,    40,
      47,    44,    40,    42,    81,    82,   175,    37,    26,    46,
      38,    81,    42,    81,    82,    81,    82,    82,    40,    86,
      87,   116,    36,   116,    44,    81,    82,    81,    82,   131,
      37,    37,    17,    18,   218,    42,    42,    40,     5,    36,
      42,    36,    60,    81,    82,   334,   116,    36,   118,    45,
      17,    18,   122,    46,   124,    40,   225,   127,    43,    36,
      27,    28,    29,    36,    31,    32,    33,    34,    35,    36,
     172,    37,    36,    40,    46,    46,    42,    44,    46,    46,
      41,    46,   164,    46,    46,    42,    45,    45,    36,    36,
      46,    36,    36,    36,    46,    41,    81,    82,   116,    36,
      38,    37,     7,    26,    46,   175,   124,   202,     7,   202,
      37,   295,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    46,    46,     5,   308,    46,    46,    46,   297,    46,
      46,     5,   202,   302,   334,   299,    -1,   164,    -1,    -1,
     324,    -1,    -1,   312,   328,   314,    17,    18,    -1,    -1,
      -1,   320,    -1,    -1,    -1,   225,   226,   175,   260,    17,
      18,    -1,   331,   332,   333,   334,   335,    -1,   337,    40,
      -1,    -1,    43,    -1,   244,    -1,   271,   346,   271,    -1,
      -1,   350,    40,    -1,   202,    43,    -1,    -1,   357,   358,
     359,   360,   361,    17,    18,   312,   365,   314,    -1,   368,
      -1,   271,   371,   320,   373,   374,   375,   225,    -1,    -1,
      81,    82,    -1,    17,    18,    -1,    40,    -1,    -1,    43,
      -1,    -1,    -1,    81,    82,    -1,    -1,   297,    -1,   346,
     124,   301,   302,   350,    -1,    -1,    40,    -1,    -1,    43,
      -1,    -1,   312,    -1,   314,    -1,    -1,    -1,   365,    -1,
     320,   368,    -1,   271,   371,    -1,    -1,    81,    82,    -1,
      -1,   331,   332,   333,   334,   335,    -1,   337,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   346,    81,    82,   297,
     350,   175,    -1,    -1,   302,    -1,    -1,   357,   358,   359,
     360,   361,    -1,    -1,   312,   365,   314,    -1,   368,    -1,
      -1,   371,   320,   373,   374,   375,    19,    -1,    -1,    -1,
      -1,    -1,    -1,   331,   332,   333,   334,   335,    -1,   337,
      -1,    -1,    -1,    36,    -1,    -1,    39,    40,   346,    -1,
      -1,   225,   350,    -1,    -1,    -1,    -1,    -1,    -1,   357,
     358,   359,   360,   361,    -1,    -1,    -1,   365,    -1,    -1,
     368,    -1,    -1,   371,    -1,   373,   374,   375,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,    -1,    -1,
      -1,   124,    -1,    -1,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   297,   117,    -1,    -1,    -1,   302,    -1,
      -1,    -1,    -1,   126,    -1,   128,    -1,   130,   312,    -1,
     314,   134,    -1,    -1,    -1,    -1,   320,    -1,    -1,    -1,
      -1,    -1,   175,    -1,    -1,    -1,    -1,   331,   332,   333,
     334,   335,    -1,   337,    -1,    -1,   124,    -1,    -1,    -1,
      -1,    -1,   346,    -1,    -1,    -1,   350,    -1,   171,    -1,
      -1,    -1,    -1,   357,   358,   359,   360,   361,    -1,    -1,
      -1,   365,    -1,    -1,   368,    -1,    -1,   371,    -1,   373,
     374,   375,   225,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   175,   124,    -1,
      -1,    -1,   215,    -1,    -1,    -1,   219,   220,    -1,    -1,
      -1,    -1,    -1,    -1,   227,    -1,    -1,    -1,   231,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,    -1,   259,   225,    -1,   175,
     124,    -1,    -1,    -1,   297,    -1,    -1,    -1,    -1,   302,
      -1,    -1,    -1,    -1,   277,   278,   279,   280,    -1,   312,
      -1,   314,    -1,    -1,    -1,    -1,    -1,   320,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   299,   300,   331,   332,
     333,   334,   335,    -1,   337,    -1,    -1,    -1,    -1,   225,
      -1,   175,    -1,   346,    -1,    -1,    -1,   350,    -1,    -1,
      -1,    -1,   325,    -1,   357,   358,   359,   360,   361,   297,
      -1,    -1,   365,   336,   302,   368,    -1,    -1,   371,    -1,
     373,   374,   375,    -1,   312,    -1,   314,    -1,    -1,    -1,
     124,    -1,   320,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   225,    -1,   331,   332,   333,   334,   335,    -1,   337,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   346,    -1,
      -1,   297,   350,    -1,    -1,    -1,   302,    -1,    -1,   357,
     358,   359,   360,   361,    -1,    -1,   312,   365,   314,    -1,
     368,   175,   124,   371,   320,   373,   374,   375,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   331,   332,   333,   334,   335,
      -1,   337,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     346,    -1,    -1,   297,   350,    -1,    -1,    -1,   302,    -1,
      -1,   357,   358,   359,   360,   361,    -1,    -1,   312,   365,
     314,   225,   368,   175,   124,   371,   320,   373,   374,   375,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   331,   332,   333,
     334,   335,    -1,   337,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   346,    -1,    -1,    -1,   350,    -1,    -1,    -1,
      -1,    -1,    -1,   357,   358,   359,   360,   361,    -1,    -1,
      -1,   365,    -1,   225,   368,   175,    -1,   371,    -1,   373,
     374,   375,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   297,    -1,    -1,    -1,    -1,   302,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   312,    -1,
     314,    -1,    -1,    -1,    -1,    -1,   320,    -1,    -1,    -1,
     175,    -1,    -1,    -1,    -1,    -1,    -1,   331,   332,   333,
     334,   335,    -1,   337,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   346,    -1,    -1,   297,   350,    -1,    -1,    -1,
     302,    -1,    -1,   357,   358,   359,   360,   361,    -1,    -1,
     312,   365,   314,    -1,   368,    -1,    -1,   371,   320,   373,
     374,   375,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   331,
     332,   333,   334,   335,    -1,   337,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   346,    -1,    -1,   297,   350,    -1,
      -1,    -1,   302,    -1,    -1,   357,   358,   359,   360,   361,
      -1,    -1,   312,   365,   314,    -1,   368,    -1,    -1,   371,
     320,   373,   374,   375,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   331,   332,   333,    -1,   335,    -1,   337,    -1,    -1,
      -1,    -1,   297,    -1,    -1,    -1,   346,   302,    -1,    -1,
     350,    -1,    -1,    -1,    -1,    -1,    -1,   357,   358,   359,
     360,   361,    -1,    -1,    -1,   365,    -1,    -1,   368,    -1,
      -1,   371,    -1,   373,   374,   375,   331,   332,   333,    -1,
     335,    -1,   337,    -1,    -1,    -1,     5,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,
      -1,    -1,   357,   358,   359,   360,   361,    -1,    27,    28,
      29,     5,    31,    32,    33,    34,    35,    36,   373,   374,
     375,    40,    -1,    17,    18,    44,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    28,    29,    -1,    31,    32,    33,
      34,    35,    36,    -1,    -1,    -1,    40,    -1,    -1,    -1,
      44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    79,    80,    81,    82,    83,
      84,    85,    86,    87,     6,    -1,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    -1,    -1,
      22,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      32,    33,    34,    -1,    -1,    -1,    -1,    39,    40,     6,
      -1,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    22,    23,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    32,    33,    34,    -1,    -1,
      -1,    38,    -1,    40,    -1,    -1,    -1,    -1,    -1,    81,
      82,    -1,    -1,    -1,     6,    -1,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    -1,    -1,
      22,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      32,    33,    34,    -1,    81,    82,    38,     6,    40,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    -1,    -1,    22,    23,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    32,    33,    34,    -1,    -1,    -1,    -1,
      39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      82,    -1,     6,    -1,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    -1,    -1,    22,    23,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,
      34,    -1,    81,    82,    38,     6,    40,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    32,    33,    34,    -1,    -1,    -1,    -1,    39,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    -1,
       6,    -1,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    -1,    -1,    22,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,    -1,
      81,    82,    38,     6,    40,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    -1,    -1,    22,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,
      33,    34,    -1,    -1,    -1,    -1,    39,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    82,    -1,     6,    -1,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    22,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    32,    33,    34,    -1,    81,    82,
      38,     6,    40,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    -1,    -1,    22,    23,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      -1,    -1,    -1,    -1,    39,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    82,    -1,     6,    -1,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      -1,    -1,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    32,    33,    34,    -1,    81,    82,    38,     6,
      40,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    22,    23,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    32,    33,    34,    -1,    -1,
      -1,    -1,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    82,    -1,     6,    -1,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    -1,    -1,
      22,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      32,    33,    34,    -1,    81,    82,    38,     6,    40,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    -1,    -1,    22,    23,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    32,    33,    34,    -1,    -1,    -1,    -1,
      39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      82,     6,    -1,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    -1,    -1,    22,    23,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      -1,    -1,    81,    82,    39,    40,     6,    -1,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      -1,    -1,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    39,
      40,    -1,    -1,    -1,    -1,    -1,    81,    82,    -1,     6,
      -1,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    22,    23,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    32,    33,    34,    -1,    -1,
      -1,    81,    82,    40,    17,    18,    -1,    20,    21,    -1,
      -1,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,
      43,    -1,    -1,    -1,    -1,    -1,    49,    50,    -1,    18,
      -1,    -1,    -1,    -1,    81,    82,    -1,    -1,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    -1,
      -1,    40,    -1,    -1,    43,    -1,    -1,    -1,    81,    82,
      49,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    37,    -1,    -1,    -1,    -1,    42,    -1,
      -1,    -1,    81,    82,    48,    -1,    -1,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,
      74,    75,    76,    77,    78,    37,    -1,    -1,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    73,    74,    75,    76,    77,    78,    37,    -1,    -1,
      -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    48,    -1,
      -1,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,
      -1,    -1,    72,    73,    74,    75,    76,    77,    78,    48,
      -1,    -1,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,
      -1,    -1,    -1,    72,    73,    74,    75,    76,    77,    78,
      48,    -1,    -1,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      37,    -1,    -1,    -1,    72,    73,    74,    75,    76,    77,
      78,    48,    -1,    -1,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    37,    -1,    -1,    -1,    72,    73,    74,    75,    76,
      77,    78,    48,    -1,    -1,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    -1,    -1,    -1,    72,    73,    74,    75,
      76,    77,    78,    48,    -1,    -1,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    37,    -1,    -1,    -1,    72,    73,    74,
      75,    76,    77,    78,    48,    -1,    -1,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    37,    -1,    -1,    -1,    72,    73,
      74,    75,    76,    77,    78,    48,    -1,    -1,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    37,    -1,    -1,    -1,    72,
      73,    74,    75,    76,    77,    78,    48,    -1,    -1,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    -1,    -1,
      72,    73,    74,    75,    76,    77,    78,    48,    -1,    -1,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    73,    74,    75,    76,    77,    78,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      73,    74,    75,    76,    77,    78,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    -1,    -1,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    74,
      75,    76,    77,    78,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    48,    -1,    -1,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    72,    73,    74,    75,    76,
      77,    78,    42,    -1,    -1,    -1,    -1,    -1,    48,    -1,
      -1,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    73,    74,    75,    76,    77,    78,    42,
      -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      73,    74,    75,    76,    77,    78,    45,    -1,    -1,    48,
      -1,    -1,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    73,    74,    75,    76,    77,    78,
      46,    -1,    48,    -1,    -1,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    74,    75,
      76,    77,    78,    46,    -1,    48,    -1,    -1,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      73,    74,    75,    76,    77,    78,    48,    -1,    -1,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    73,    74,    75,    76,    77,    78
  };

  const unsigned char
  parser::yystos_[] =
  {
       0,     3,     4,    82,    90,    91,    92,    93,    94,    95,
      96,   150,    81,   151,    36,     0,    92,    93,    36,    61,
      46,    84,   147,    97,   150,     5,    17,    18,    27,    28,
      29,    31,    32,    33,    34,    35,    36,    40,    44,    79,
      80,    83,    85,    86,    87,   122,   124,   125,   126,   127,
     128,   129,   130,   131,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   155,   156,   157,   158,    37,
      37,    42,    40,   130,   131,   150,   151,    40,   122,   141,
      40,   122,   132,   150,   122,   122,    46,    48,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    72,    73,
      74,    75,    76,    77,    78,    47,    17,    40,    43,   130,
     131,    36,    44,    46,    38,   150,    40,    44,    40,    37,
      42,    42,   122,    41,    42,   122,   122,   122,   122,   122,
     122,   122,   122,   122,   122,   122,   122,   122,   122,   122,
     122,   122,   122,   122,   130,   131,   122,    30,   150,   154,
     132,   150,     6,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    19,    22,    23,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   123,   128,   129,
     134,   135,   139,   150,   155,   156,   157,   158,   122,   150,
     122,   122,   141,    41,   122,    45,    41,    37,    36,    36,
      36,   145,   147,    45,    46,    36,    36,    36,    46,    46,
     122,    36,   141,    46,    46,    39,    99,    46,    46,    46,
      20,    21,    24,    25,    43,    49,    50,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    41,    42,
      42,    41,   122,   132,   122,   122,    45,    45,   120,   123,
     128,   139,   150,   122,    46,   122,    46,    36,    36,    36,
      36,   122,   122,   122,   122,   122,   122,   122,   122,   122,
     122,   122,    41,   122,   141,    36,    37,    37,    37,    46,
      26,    42,    37,    37,   122,   122,   122,   122,    36,    37,
      37,   132,    38,    99,    38,   121,   122,   124,   122,   150,
      38,    99,    46,    37,    42,    42,    37,    37,    42,   132,
      37,    98,     7,    98,    46,    37,    26,    98,    46,   132,
     122,    46,    46,   132,    37,    39,    38,    99,    39,   120,
      38,    99,   122,    39,    37,    37,    37,     7,    98,    37,
      98,    37,    46,    46,    46,    38,    99,    39,    38,    99,
      39,    38,    99,    98,    98,    98,    39,    39,    39
  };

  const unsigned char
  parser::yyr1_[] =
  {
       0,    89,    90,    90,    91,    91,    91,    91,    92,    93,
      93,    93,    94,    95,    96,    97,    97,    97,    98,    98,
      98,    99,    99,    99,    99,    99,    99,    99,    99,    99,
      99,    99,    99,    99,    99,    99,    99,    99,    99,    99,
      99,   100,   100,   101,   102,   103,   103,   104,   104,   105,
     105,   106,   107,   108,   109,   109,   110,   110,   110,   110,
     111,   111,   112,   112,   113,   113,   113,   113,   114,   115,
     115,   116,   117,   118,   119,   119,   120,   120,   121,   121,
     122,   122,   122,   122,   123,   123,   123,   123,   123,   123,
     123,   123,   123,   123,   123,   123,   123,   124,   124,   124,
     124,   124,   124,   124,   124,   125,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   127,   127,   127,   127,
     127,   127,   127,   127,   127,   127,   127,   127,   127,   127,
     127,   127,   127,   127,   127,   127,   127,   127,   127,   127,
     127,   127,   128,   128,   128,   128,   129,   129,   129,   129,
     130,   130,   131,   131,   132,   132,   132,   133,   133,   134,
     135,   136,   137,   138,   139,   139,   139,   139,   139,   139,
     139,   139,   140,   141,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158
  };

  const signed char
  parser::yyr2_[] =
  {
       0,     2,     1,     0,     2,     2,     1,     1,     3,     1,
       1,     1,     5,     4,     7,     3,     1,     0,     2,     1,
       0,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     2,     6,     8,     6,     5,     3,     8,
       6,     8,     2,     2,     7,     5,    11,     9,     9,     7,
       7,     5,    11,     9,     9,    11,     7,     9,     7,     3,
       3,     2,     2,     2,     3,     2,     1,     0,     1,     0,
       1,     1,     1,     1,     2,     2,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     5,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     2,     2,     3,     3,
       4,     6,     8,     9,     3,     1,     0,     2,     3,     4,
       3,     3,     7,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     7,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1
  };




#if S1DEBUG
  const short
  parser::yyrline_[] =
  {
       0,   122,   122,   123,   127,   129,   131,   133,   138,   143,
     144,   145,   149,   154,   159,   164,   166,   169,   173,   175,
     178,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   205,   207,   212,   217,   222,   224,   229,   231,   236,
     238,   243,   248,   253,   258,   260,   268,   270,   275,   280,
     290,   292,   300,   302,   311,   313,   315,   321,   330,   335,
     337,   342,   347,   351,   356,   358,   363,   364,   368,   369,
     373,   374,   375,   376,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   396,   397,   398,
     399,   400,   401,   402,   403,   407,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   424,   425,   426,   427,
     428,   429,   430,   431,   432,   433,   434,   435,   436,   437,
     438,   439,   440,   441,   442,   443,   444,   445,   446,   447,
     448,   449,   453,   454,   455,   456,   460,   461,   462,   463,
     467,   469,   474,   476,   481,   483,   486,   490,   492,   497,
     502,   507,   512,   517,   522,   523,   524,   525,   526,   527,
     528,   529,   533,   538,   539,   542,   543,   544,   545,   546,
     547,   548,   549,   550,   551,   552,   553,   554,   555,   556,
     557,   558
  };

  void
  parser::yy_stack_print_ () const
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << int (i->state);
    *yycdebug_ << '\n';
  }

  void
  parser::yy_reduce_print_ (int yyrule) const
  {
    int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):\n";
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // S1DEBUG


#line 14 "S1.parser.ypp"
} // S1
#line 4038 "./S1/compiler_parser.cpp"

#line 560 "S1.parser.ypp"


void S1::parser::error(const std::string& msg)
{
    GSC_COMP_ERROR("%s", msg.data());
}
