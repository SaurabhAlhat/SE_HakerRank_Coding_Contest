<!DOCTYPE html>
<!-- saved from url=(0106)https://www.hackerrank.com/contests/se-weekly-coding-div-a-13032020/challenges/find-the-fourth/submissions -->
<html lang="en" class=" mod_js mod_flexbox mod_flexboxlegacy mod_canvas mod_canvastext mod_webgl mod_no-touch mod_geolocation mod_history mod_draganddrop mod_rgba mod_hsla mod_multiplebgs mod_backgroundsize mod_borderimage mod_borderradius mod_boxshadow mod_textshadow mod_opacity mod_cssanimations mod_csscolumns mod_cssgradients mod_cssreflections mod_csstransforms mod_csstransforms3d mod_csstransitions mod_fontface mod_generatedcontent mod_video mod_audio mod_applicationcache mod_svg mod_inlinesvg mod_smil mod_svgclippaths mod_csscalc mod_fullscreen mod_cssresize mod_no-ie8compat"><head><meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
    <script type="text/javascript" async="" src="./Find_the_fourth_files/BizibleAcct.js.download"></script><script id="twitter-wjs" src="./Find_the_fourth_files/widgets.js.download"></script><script src="./Find_the_fourth_files/bizible.js.download"></script><script type="text/javascript" async="" src="./Find_the_fourth_files/filepicker.js.download"></script><script type="text/javascript" async="" src="./Find_the_fourth_files/ga.js.download"></script><script async="" src="./Find_the_fourth_files/gtm.js.download"></script><script type="text/javascript">
        function set_manifest(manifest) {
            HR.MANIFEST = manifest;
        }
    </script>
    <script type="text/javascript">
  window.PRODUCT_NAMESPACE = 'hackerrank'
  window.APP_METRIC_TRACKING_ENABLED = false
  window.PERF_METRICS = {
    tracked_initial_view_load_tti: {},
    tracked_view_load_tti: {}
  }
    if ((window.PRODUCT_NAMESPACE == 'hackerrank' || window.PRODUCT_NAMESPACE == 'hackerrankx') && (Math.floor(Math.random() * 2) + 1) == 1) {
      window.APP_METRIC_TRACKING_ENABLED = true
    }
</script>

<script type="text/javascript">
  window.HR = window.HR || {}
  HR.development = false
  HR.production = true
  HR.DESIGN_SUBDOMAIN_PREFIX = 'design'
  HR.DESIGN_DOMAIN = 'hrcdn.net'
  HR.USE_CURRENT_HOST_AS_DESIGN_DOMAIN = ''
  HR.RECAPTCHA_V3_KEY = '6LfTjdkUAAAAAOhQL2_kkpxaLt2mwILWGO9V1_vm'
</script>

<!-- jsCookies -->
  <script type="text/javascript">
    /*!
 * JavaScript Cookie v2.1.2
 * https://github.com/js-cookie/js-cookie
 *
 * Copyright 2006, 2015 Klaus Hartl & Fagner Brack
 * Released under the MIT license
 */
if(function(factory){if("function"==typeof define&&define.amd)define(factory);else if("object"==typeof exports)module.exports=factory();else{var OldCookies=window.Cookies,api=window.Cookies=factory();api.noConflict=function(){return window.Cookies=OldCookies,api}}}(function(){function extend(){for(var i=0,result={};i<arguments.length;i++){var attributes=arguments[i];for(var key in attributes)result[key]=attributes[key]}return result}function init(converter){function api(key,value,attributes){var result;if("undefined"!=typeof document){if(arguments.length>1){if(attributes=extend({path:"/"},api.defaults,attributes),"number"==typeof attributes.expires){var expires=new Date;expires.setMilliseconds(expires.getMilliseconds()+864e5*attributes.expires),attributes.expires=expires}try{result=JSON.stringify(value),/^[\{\[]/.test(result)&&(value=result)}catch(e){}return value=converter.write?converter.write(value,key):encodeURIComponent(String(value)).replace(/%(23|24|26|2B|3A|3C|3E|3D|2F|3F|40|5B|5D|5E|60|7B|7D|7C)/g,decodeURIComponent),key=encodeURIComponent(String(key)),key=key.replace(/%(23|24|26|2B|5E|60|7C)/g,decodeURIComponent),key=key.replace(/[\(\)]/g,escape),document.cookie=[key,"=",value,attributes.expires&&"; expires="+attributes.expires.toUTCString(),attributes.path&&"; path="+attributes.path,attributes.domain&&"; domain="+attributes.domain,attributes.secure?"; secure":""].join("")}key||(result={});for(var cookies=document.cookie?document.cookie.split("; "):[],rdecode=/(%[0-9A-Z]{2})+/g,i=0;i<cookies.length;i++){var parts=cookies[i].split("="),cookie=parts.slice(1).join("=");'"'===cookie.charAt(0)&&(cookie=cookie.slice(1,-1));try{var name=parts[0].replace(rdecode,decodeURIComponent);if(cookie=converter.read?converter.read(cookie,name):converter(cookie,name)||cookie.replace(rdecode,decodeURIComponent),this.json)try{cookie=JSON.parse(cookie)}catch(e){}if(key===name){result=cookie;break}key||(result[name]=cookie)}catch(e){}}return result}}return api.set=api,api.get=function(key){return api(key)},api.getJSON=function(){return api.apply({json:!0},[].slice.call(arguments))},api.defaults={},api.remove=function(key,attributes){api(key,"",extend(attributes,{expires:-1}))},api.withConverter=init,api}return init(function(){})}),"undefined"==typeof jsCookies&&"undefined"!=typeof Cookies)var jsCookies={get:function(c_name){return Cookies.get(c_name)},set:function(c_name,value,expiredays,expirehours,expiremins,expiresecs,options){var exdate=new Date;exdate.setDate(exdate.getDate()+(expiredays||0)),exdate.setHours(exdate.getHours()+(expirehours||0)),exdate.setMinutes(exdate.getMinutes()+(expiremins||0)),exdate.setSeconds(exdate.getSeconds()+(expiresecs||0));var set_expire_time=!(null==expiredays&&null==expiresecs&&null==expiremins&&null==expirehours),config=options||{};set_expire_time&&(config.expires=exdate),Cookies.set(c_name,value,config)},check:function(c_name){return!!Cookies.get(c_name)},destroy:function(c_name){Cookies.remove(c_name)}};
//# sourceMappingURL=https://staging.hackerrank.net/assets/sourcemaps/jscookies-88896efbb43b944a89475f0d11049724.js.map
  </script>

<script type="text/javascript">
  !function(){function getRandRange(min,max){return parseInt(Math.random()*(max-min))+min}function getRandChar(){var offset=getRandRange(0,35);return offset>25?(offset-26).toString():String.fromCharCode(97+offset)}function makeId(length){for(var text="",i=0;length>i;i++)text+=getRandChar();return text}function setSessionId(){key="session_id";var session_key=jsCookies.get(key);session_key?jsCookies.set(key,session_key,null,2,null,null,{secure:!0}):(epoch=(new Date).getTime(),rand_id=makeId(8),jsCookies.set(key,rand_id+"-"+epoch.toString(),null,2,null,null,{secure:!0})),setTimeout(setSessionId,6e4)}setSessionId()}();
//# sourceMappingURL=https://staging.hackerrank.net/assets/sourcemaps/set_session-51b03f337d09782da69729476d69c39d.js.map
</script>

<!-- DNS Prefetch -->
<link rel="dns-prefetch" href="https://hrcdn.net/">
<link rel="dns-prefetch" href="https://d3keuzeb2crhkn.cloudfront.net/">
<link rel="dns-prefetch" href="https://notifications.hackerrank.com/">
<link rel="dns-prefetch" href="https://metrics.hackerrank.com/">
<link rel="preconnect" href="https://sentry.io/">
<link rel="dns-prefetch" href="https://sentry.io/">

<!-- use the latest IE browser -->
<meta http-equiv="X-UA-Compatible" content="IE=Edge">

<!-- App Icon for iOS Devices -->
<link rel="apple-touch-icon-precomposed" href="https://hrcdn.net/hackerrank/assets/apple-touch-icon-precomposed-5e8e592a0a1a387a1185089d13d65637.png">

<!-- favicon -->
<link rel="shortcut icon" type="image/png" href="https://hrcdn.net/hackerrank/assets/favicon-8a885f499e0b0b098a5140b6a8a08991.png">

<!-- generating meta tags -->


<meta name="description" content="Print the total number of challenges created by hackers.">
<meta property="og:title" content="Solve Challenges">
<meta property="og:image" content="https://hrcdn.net/og/default.jpg">
<meta property="og:description" content="Print the total number of challenges created by hackers. Solving code challenges on HackerRank is one of the best ways to prepare for programming interviews.">
<meta property="og:url" content="https://www.hackerrank.com/contests/se-weekly-coding-div-a-13032020/challenges">
<meta property="og:site_name" content="HackerRank">
<meta property="og:type" content="hackerrank:challenge">
<meta name="twitter:card" content="summary">
<meta name="twitter:site" content="@hackerrank">
<meta name="twitter:url" content="https://www.hackerrank.com">
<meta name="twitter:title" content="HackerRank">
<meta property="fb:app_id" content="347499128655783">

<link href="https://www.hackerrank.com/contests/se-weekly-coding-div-a-13032020/challenges/" rel="canonical"><!-- ends meta tags generation -->

<!-- CSRF Token -->
<meta name="csrf-param" content="authenticity_token">
<meta name="csrf-token" content="ik+Vpy2obHLCfVv7vdz2c8fbZinPwEJVLc8nvz4LRrq9fdwDw6OY5XMsZnoeg7hc95ZYpzmeq1trlCm9GMOeQg==">

  <link rel="stylesheet" media="all" href="./Find_the_fourth_files/hackerrank_libraries-21fce5f00a5704ab97ea6e29f618ca7f.css">
  <link rel="stylesheet" media="all" href="./Find_the_fourth_files/hackerrank-core2-544ce370957cf291e278582bbca1f8c7.css">
  <link rel="stylesheet" media="all" href="./Find_the_fourth_files/dashboard-a6839512afddeb30aefee5ffef4396b6.css">
  <link rel="stylesheet" media="all" href="./Find_the_fourth_files/theme_m_patch-3a1abf3a083c8d4c09a6daeef4150d54.css">


<!-- Sentry -->
<!--
CDN distribution of raven.js looks for requirejs, but the module is anonymous.
If we are using require.js and loading an anonymous module without require.js, it raises an error.
https://github.com/getsentry/raven-js/issues/635
https://github.com/getsentry/raven-js/issues/97
-->
  <script src="./Find_the_fourth_files/raven-842e0dd9ae7063befec00a4841fc2792.js.download" id="raven" crossorigin="anonymous" async="async"></script>
  <script type="text/javascript">
    (function(window, queue, loaded, script) {

      var raven_user_context = {
          handle: '6441413',
      }
      var raven_extra_context = {
        loadTimestamp: 1591688509,
        assetUrl: 'https://hrcdn.net',
        cdnUrl: ''
      }

        raven_extra_context.mixpanel_token = '6653b5c2-27f8-44f1-8565-ab40687b49b5'

      window.onerror = function e(message, file, lineNo, columnNo, error) {
          if (loaded) return;
          queue.push([message, file, lineNo, columnNo, error]);
      };

      window.onunhandledrejection = function e(error) {
          if (loaded) return;
          queue.push([
              error.reason,
          ]);
      };

      script.onreadystatechange = script.onload = function() {
          if (loaded) return;
          loaded = true;

          Raven.config("https://6b2d52b23d5a4dd4bc44330335327c04@sentry.io/234162", {
              release: '-',
              ignoreUrls: [/cdn\.userty\.com/],
              ignoreErrors: [
                '$ is not defined',
                'Error: Connection is disposed',
                'Connection got disposed',
                'A network error occurred',
                'Model is disposed!',
                'Invalid start index',
              ],
          }).install();
          Raven.setUserContext(raven_user_context)
          Raven.setExtraContext(raven_extra_context)
          window.onunhandledrejection = function e(error) {
              Raven.captureException(error.reason, {
                  extra: {
                      type: error.type,
                  },
              });
          };

          queue.forEach(function(error) {
              Raven.captureException(error[4] || error[0], {
                  extra: {
                      file: error[1],
                      line: error[2],
                      col: error[3],
                  },
              });
          });
      };
    }(window, [], false, document.getElementById('raven')));
  </script>

<!-- Google Analyitics Init -->
<script type="text/javascript">
    var _gaq = _gaq || [];
    _gaq.push(['_setAccount', "UA-45092266-1"]);
    _gaq.push(['_trackPageview']);
    _gaq.push(['_gat._anonymizeIp']);
    _gaq.push(['_setCampSourceKey', 'utm_source']);
    _gaq.push(['_setCampMediumKey', 'utm_medium']);
    _gaq.push(['_setCampContentKey', 'utm_keyword']);
    _gaq.push(['_setCampTermKey', 'utm_keyword']);
    _gaq.push(['_setCampNameKey', 'utm_campaign']);
</script>

<!-- Mixpanel Stub -->
<script type="text/javascript">
  window.mixpanel = window.mixpanel || [];
  var attrs = "disable track track_pageview track_links track_forms register register_once alias unregister identify name_tag set_config people.set people.set_once people.increment people.append people.track_charge people.clear_charges people.delete_user".split(" ");
  for (var attribute in attrs) {
    mixpanel[attrs[attribute]] = function () {};
  }
</script>

<!-- Heap Analytics Init -->
<script type="text/javascript">
    var heap = heap || [];
</script>

<script type="text/javascript">
  (function(h) {
    window.hr_metrics = h;
    if (!h.loaded) {
      var a = ['track', 'batch_track', 'app_track', 'externalService', 'init', 'batch_track_record', 'track_dwell_time', 'set_navigation_data'];
      for (var i = 0; i < a.length; i++) {
        if (!h[a[i]]) {h[a[i]] = function() {};}
      }
    }
  })(window.hr_metrics || {});
</script>

<script type="text/javascript">
    /**
     * Protect window.console method calls, e.g. console is not defined on IE
     * unless dev tools are open, and IE doesn't define console.debug
     */
(function() {
    if (!window.console) {
      window.console = {};
    }
    var m = ["log", "info", "warn", "error", "debug", "trace", "dir", "group", "groupCollapsed", "groupEnd", "time", "timeEnd", "profile", "profileEnd", "dirxml", "assert", "count", "markTimeline", "timeStamp", "clear"];
    // define undefined methods as noops to prevent errors
    for (var i = 0; i < m.length; i++) {
        if (!window.console[m[i]]) {
            window.console[m[i]] = function() {};
        }
    }
})();
</script>


  <script type="text/javascript">
    var pusher_app_key = 'a280047e3b323ccb1b65';
  </script>

<!-- Linkedin Insights -->


<script>
  dataLayer = [];
</script>

<!-- Google Tag Manager #1 -->
<script>(function(w,d,s,l,i){w[l]=w[l]||[];w[l].push({'gtm.start':
new Date().getTime(),event:'gtm.js'});var f=d.getElementsByTagName(s)[0],
j=d.createElement(s),dl=l!='dataLayer'?'&l='+l:'';j.async=true;j.src=
'https://www.googletagmanager.com/gtm.js?id='+i+dl;f.parentNode.insertBefore(j,f);
})(window,document,'script','dataLayer', 'GTM-5FXW96J');</script>
<!-- End Google Tag Manager #1 -->


    <!-- General Information -->
    <title>Find the Fourth Submissions | SE_WEEKLY_CODING_DIV-A_08042020 Question | Contests | HackerRank</title>

    <!--  TODO : This need to be configured from configuration file -->
      <script type="text/javascript" charset="utf-8" async="" data-requirecontext="_" data-requiremodule="https://hrcdn.net/hackerrank/assets/compound/challenge-views-fcf989000118411c2eb3547a5dd9ff8b.js" src="./Find_the_fourth_files/challenge-views-fcf989000118411c2eb3547a5dd9ff8b.js.download"></script><script type="text/javascript" charset="utf-8" async="" data-requirecontext="_" data-requiremodule="https://hrcdn.net/hackerrank/assets/codemirror_basic-26cb1806397aa9cb043ac41446f2e74a.js" src="./Find_the_fourth_files/codemirror_basic-26cb1806397aa9cb043ac41446f2e74a.js.download"></script><script type="text/javascript" charset="utf-8" async="" data-requirecontext="_" data-requiremodule="https://hrcdn.net/hackerrank/assets/codemirror/mode/clike/clike-953c2802cb796f81fce3165d4a905972.js" src="./Find_the_fourth_files/clike-953c2802cb796f81fce3165d4a905972.js.download"></script><script type="text/javascript" charset="utf-8" async="" data-requirecontext="_" data-requiremodule="https://hrcdn.net/hackerrank/assets/compound/submission-views-57487fcadff4e2c73e72e5c554c163b3.js" src="./Find_the_fourth_files/submission-views-57487fcadff4e2c73e72e5c554c163b3.js.download"></script><script type="text/javascript" charset="utf-8" async="" data-requirecontext="_" data-requiremodule="https://hrcdn.net/hackerrank/assets/compound/websocket-libraries-0b9725dac0e3c035b1733bf63eb98baf.js" src="./Find_the_fourth_files/websocket-libraries-0b9725dac0e3c035b1733bf63eb98baf.js.download"></script><script type="text/javascript" charset="utf-8" async="" data-requirecontext="_" data-requiremodule="https://hrcdn.net/hackerrank/assets/compound/game-views-99d04e5f990831fb420132c24aec2a98.js" src="./Find_the_fourth_files/game-views-99d04e5f990831fb420132c24aec2a98.js.download"></script><!--<base href="/">--><base href=".">

    <script type="text/javascript">
      var HR;
      HR = window.HR || {};
      HR.PREFETCH_DATA = {"metadata":{"asset_path":"https://hrcdn.net/hackerrank/assets","asset_host":"https://hrcdn.net","asset_host_path":"https://hrcdn.net/hackerrank","filepicker_key":"ApehXMbvXTWqWab7OmMr9z","pubsub_host":"https://pubsub.hackerrank.com","release_version":"0","country_from_ip":"India","landing_contest_slug":"se-weekly-coding-div-a-13032020","current_contest_namespace":"/contests/se-weekly-coding-div-a-13032020","using_contest_namespace":true},"slugs":{"se-weekly-coding-div-a-13032020":{"type":"contest"},"saurabhlht112":{"type":"hacker"}},"contest":{"id":99105,"name":"SE_WEEKLY_CODING_DIV-A_08042020","slug":"se-weekly-coding-div-a-13032020","created_at":"2020-03-12T11:33:35.000Z","updated_at":"2020-04-12T08:51:51.000Z","starttime":"2020-04-08T13:30:00.000Z","endtime":null,"timezone":"PST","homepage":null,"tagline":null,"description":"Please provide a short description of your contest here! This will also be used as metadata.","homepage_background_color":null,"notification":null,"template_id":552,"expose_stats":null,"public":false,"team_event":false,"rating_category":null,"is_rating_updated":false,"leaderboard_backend":null,"leaderboard_format":"","primary_track_id":null,"college_public":null,"rated":null,"is_multi_round":false,"parent_contest_id":null,"primary_tag_id":null,"started":true,"ended":false,"epoch_endtime":0,"epoch_starttime":1586352600,"time_left":null,"hide_difficulty":null,"has_tracks":null,"archived":false,"leaderboard_type":"country","kind":"","leaderboard_freeze_time":null,"show_penalty":true,"track":null,"hide_navigation":null,"contest_broadcast":null,"hide_leaderboard":null,"hide_submissions":null,"leaderboard_out_of_sync":null,"leaderboard_out_of_sync_message":null,"challenges_count":4,"show_participants_info":null,"custom_leaderboard_column_name":null,"disable_forum":null,"disable_fsi":null,"has_codesprint_reg_page":null,"hidden":null,"comment_live_sync":null,"company_associated_contest":null,"limited_participants":null,"leaderboard_broadcast_message":null,"qualification_rule_type":null,"qualification_rule_value":0,"qualification_rule_msg":null,"migration_status":null,"migration_disabled":null,"testers_contest":null,"time_limited_contest":false,"hacker_timelimit":null,"school_leaderboard_enabled":false,"organization_type":"other","organization_name":"Pimpri Chinchwad College of Engineering ","sponsor_logos":null,"sponsor_logos_name":null,"require_linkedin_or_resume":null,"effective_time_left":null,"effective_epoch_endtime":null},"messages":[],"profile":{"id":6441413,"username":"saurabhlht112","country":"India","school":null,"languages":[["bash","3"],["cpp","2"],["java8","1"]],"created_at":"2019-07-02T03:21:27.000Z","level":1,"email":"saurabhlht112@gmail.com","fb_uid":null,"gh_uid":null,"li_uid":null,"is_admin":false,"is_support_admin":false,"avatar":"https://d3rpyts3de3lx8.cloudfront.net/hackerrank/assets/gravatar.jpg","website":"","short_bio":null,"username_change_count":null,"name":"Saurabh  Alhat","personal_first_name":"Saurabh ","personal_last_name":"Alhat","company":null,"local_language":null,"has_avatar_url":false,"hide_account_checklist":null,"spam_user":null,"job_title":"","jobs_headline":null,"linkedin_url":null,"github_url":null,"errors":{},"confirmed":true,"facebook_allow_opengraph":null,"tsize":null,"is_migrated":false,"facebook_opengraph_access_available":null,"promised_login_time":null,"last_logout_feedback":null,"chat_enabled":true,"tour_done":null,"username_autoset":true,"key_prefix":"6441413-241363352566607ea0b8fa8bd4984a9b402ae543","notifications_url":"https://notify.hackerrank.com/subscribe/6441413-bab77e265afda0fc052930b9354bc214e9e908df","resume_url":null,"relocate":null,"phone":null,"phone_number":null,"blog_url":null,"college_major":null,"college_major_id":null,"jobs_consent":null,"graduation_year":"2022","college_year":null,"college_majors":null,"intro_screen_onboarding_done":true,"related_topics_tour_done":null,"company_challenge_breadcrumb_tour_done":null,"contest_reminders_banner_selected":null,"hometown":null,"employment_title":null,"employment_years":null,"college_roll_no":null,"college_semester":null,"college_course":null,"college_cgpa":null,"city":"Pune","state":null,"username_change_max":2,"has_viewed_feed_page":null,"address":null,"has_verified_phone_number":false,"country_of_residence":null,"has_seen_ch_full_screen_intro":null,"experience_status":null,"address_line2":null,"address_city":null,"address_state":null,"address_zip":null,"us_work_eligibility":null,"us_work_eligibility_2":null,"is_professional":false,"years_of_experience":null,"us_citizenship":null,"us_citizenship_2":null,"gender":null,"is_campus_rep":false,"hacko_amount":508,"timezone":"Asia/Calcutta","us_work_prefs":null,"ca_hide_companies":[],"jobs_joining_date":null,"jobs_prefered_roles":null,"jobs_top_skills":null,"state_id":null,"jobs_complete_us_visa":null,"jobs_us_visa_other":null,"preferred_job_locations":[],"uk_work_eligibility":null,"has_attempted_common_app":false,"stryker_consent":null,"work_ex_reset_flag":null,"job_board_consent":null,"is_organizer":null,"bookmarks_count":0,"role_number":null,"dashboard_survey_preference":null,"has_solved_a_challenge":true,"status_solve_me_first":null,"source":null,"track_nux_mixpanel":null,"registration_custom_data":null,"preferred_lang":null,"badges_onboarding_status":"done","updated_modal_profiled_data":null,"badges_opt_in_status":null,"tos_accepted_on":1562037687,"tried_interview_prep":null,"hacker_pubsub_channel":"6441413-bab77e265afda0fc052930b9354bc214e9e908df","tried_monaco_editor":null,"ga_user_id":"a70a74ac1b73bc1cdffb28f77649f47abb362abc","ga_client_id":"676017721.1565801225","ga_user_ip":"49.35.2.168","job_seeking_intent_survey":null,"job_survey_professional_data_required":2,"sourcing_jobs_consent":null,"work_start_year":null,"is_high_school_student":false,"dark_mode_banner_seen":null,"dark_mode_seen":null,"is_linkedin_connected":false,"job_availability_type":null,"job_availability_year":null,"secondary_emails":[]},"timestamp":1591688509,"tracks":[{"id":24,"slug":"tutorials","name":"Tutorials","chapters":[{"id":146,"name":"30 Days of Code","slug":"30-days-of-code","hidden":false},{"id":147,"name":"10 Days of Statistics","slug":"10-days-of-statistics","hidden":false},{"id":148,"name":"10 Days of Javascript","slug":"10-days-of-javascript","hidden":false}],"selected":2},{"id":3,"slug":"algorithms","name":"Algorithms","chapters":[{"id":43,"name":"Warmup","slug":"warmup","hidden":false},{"id":108,"name":"Implementation","slug":"implementation","hidden":false},{"id":34,"name":"Strings","slug":"strings","hidden":false},{"id":38,"name":"Sorting","slug":"arrays-and-sorting","hidden":false},{"id":36,"name":"Search","slug":"search","hidden":false},{"id":33,"name":"Graph Theory","slug":"graph-theory","hidden":false},{"id":59,"name":"Greedy","slug":"greedy","hidden":false},{"id":35,"name":"Dynamic Programming","slug":"dynamic-programming","hidden":false},{"id":151,"name":"Constructive Algorithms","slug":"constructive-algorithms","hidden":false},{"id":30,"name":"Bit Manipulation","slug":"bit-manipulation","hidden":false},{"id":153,"name":"Recursion","slug":"recursion","hidden":false},{"id":47,"name":"Game Theory","slug":"game-theory","hidden":false},{"id":29,"name":"NP Complete","slug":"np-complete-problems","hidden":false},{"id":161,"name":"Debugging","slug":"algo-debugging","hidden":false}],"selected":2},{"id":17,"slug":"data-structures","name":"Data Structures","chapters":[{"id":134,"name":"Arrays","slug":"arrays","hidden":false},{"id":39,"name":"Linked Lists","slug":"linked-lists","hidden":false},{"id":96,"name":"Trees","slug":"trees","hidden":false},{"id":119,"name":"Balanced Trees","slug":"balanced-trees","hidden":false},{"id":97,"name":"Stacks","slug":"stacks","hidden":false},{"id":98,"name":"Queues","slug":"queues","hidden":false},{"id":99,"name":"Heap","slug":"heap","hidden":false},{"id":100,"name":"Disjoint Set","slug":"disjoint-set","hidden":false},{"id":113,"name":"Multiple Choice","slug":"multiple-choice","hidden":false},{"id":118,"name":"Trie","slug":"trie","hidden":false},{"id":32,"name":"Advanced","slug":"data-structures","hidden":false}],"selected":2},{"id":22,"slug":"mathematics","name":"Mathematics","chapters":[{"id":109,"name":"Fundamentals","slug":"fundamentals","hidden":false},{"id":52,"name":"Number Theory","slug":"number-theory","hidden":false},{"id":51,"name":"Combinatorics","slug":"combinatorics","hidden":false},{"id":55,"name":"Algebra","slug":"algebra","hidden":false},{"id":54,"name":"Geometry","slug":"geometry","hidden":false},{"id":53,"name":"Probability","slug":"probability","hidden":false},{"id":128,"name":"Linear Algebra Foundations","slug":"linear-algebra-foundations","hidden":false}],"selected":2},{"id":27,"slug":"c","name":"C","chapters":[{"id":154,"name":"Introduction","slug":"c-introduction","hidden":false},{"id":155,"name":"Conditionals and Loops","slug":"c-conditionals-and-loops","hidden":false},{"id":156,"name":"Arrays and Strings","slug":"c-arrays-and-strings","hidden":false},{"id":157,"name":"Functions","slug":"c-functions","hidden":false},{"id":158,"name":"Structs and Enums","slug":"c-structs-and-enums","hidden":false}],"selected":2},{"id":2,"slug":"ai","name":"Artificial Intelligence","chapters":[{"id":8,"name":"Bot Building","slug":"ai-introduction","hidden":false},{"id":9,"name":"A* Search","slug":"astar-search","hidden":false},{"id":10,"name":"Alpha Beta Pruning","slug":"alpha-beta-pruning","hidden":false},{"id":14,"name":"Combinatorial Search","slug":"combinatorial-search-theory","hidden":false},{"id":13,"name":"Games","slug":"richman-games","hidden":false},{"id":11,"name":"Statistics and Machine Learning","slug":"machine-learning","hidden":false},{"id":44,"name":"Digital Image Analysis","slug":"image-analysis","hidden":false},{"id":49,"name":"Natural Language Processing","slug":"nlp","hidden":false},{"id":129,"name":"Probability \u0026 Statistics - Foundations","slug":"statistics-foundations","hidden":false}],"selected":2},{"id":13,"slug":"cpp","name":"C++","chapters":[{"id":77,"name":"Introduction","slug":"cpp-introduction","hidden":false},{"id":76,"name":"Strings","slug":"cpp-strings","hidden":false},{"id":78,"name":"Classes","slug":"classes","hidden":false},{"id":116,"name":"STL","slug":"stl","hidden":false},{"id":127,"name":"Inheritance","slug":"inheritance","hidden":false},{"id":159,"name":"Debugging","slug":"cpp-debugging","hidden":false},{"id":152,"name":"Other Concepts","slug":"other-concepts","hidden":false}],"selected":2},{"id":15,"slug":"java","name":"Java","chapters":[{"id":80,"name":"Introduction","slug":"java-introduction","hidden":false},{"id":82,"name":"Strings","slug":"java-strings","hidden":false},{"id":83,"name":"BigNumber","slug":"bignumber","hidden":false},{"id":84,"name":"Data Structures","slug":"java-data-structure","hidden":false},{"id":85,"name":"Object Oriented Programming","slug":"oop","hidden":false},{"id":106,"name":"Exception Handling","slug":"handling-exceptions","hidden":false},{"id":136,"name":"Advanced","slug":"java-advanced","hidden":false}],"selected":2},{"id":12,"slug":"python","name":"Python","chapters":[{"id":73,"name":"Introduction","slug":"py-introduction","hidden":false},{"id":74,"name":"Basic Data Types","slug":"py-basic-data-types","hidden":false},{"id":75,"name":"Strings","slug":"py-strings","hidden":false},{"id":120,"name":"Sets","slug":"py-sets","hidden":false},{"id":121,"name":"Math","slug":"py-math","hidden":false},{"id":122,"name":"Itertools","slug":"py-itertools","hidden":false},{"id":123,"name":"Collections","slug":"py-collections","hidden":false},{"id":124,"name":"Date and Time","slug":"py-date-time","hidden":false},{"id":126,"name":"Errors and Exceptions","slug":"errors-exceptions","hidden":false},{"id":42,"name":"Classes","slug":"py-classes","hidden":false},{"id":125,"name":"Built-Ins","slug":"py-built-ins","hidden":false},{"id":87,"name":"Python Functionals","slug":"py-functionals","hidden":false},{"id":88,"name":"Regex and Parsing","slug":"py-regex","hidden":false},{"id":89,"name":"XML","slug":"xml","hidden":false},{"id":90,"name":"Closures and Decorators","slug":"closures-and-decorators","hidden":false},{"id":139,"name":"Numpy","slug":"numpy","hidden":false},{"id":160,"name":"Debugging","slug":"py-debugging","hidden":false}],"selected":2},{"id":14,"slug":"ruby","name":"Ruby","chapters":[{"id":72,"name":"Introduction","slug":"ruby-tutorials","hidden":false},{"id":86,"name":"Control Structures","slug":"control-structures","hidden":false},{"id":79,"name":"Arrays \u0026 Hashes","slug":"ruby-arrays","hidden":false},{"id":107,"name":"Enumerables","slug":"ruby-enumerables","hidden":false},{"id":112,"name":"Methods","slug":"ruby-methods","hidden":false},{"id":135,"name":"Strings","slug":"ruby-strings","hidden":false}],"selected":2},{"id":18,"slug":"sql","name":"SQL","chapters":[{"id":92,"name":"Basic Select","slug":"select","hidden":false},{"id":132,"name":"Advanced Select","slug":"advanced-select","hidden":false},{"id":95,"name":"Aggregation","slug":"aggregation","hidden":false},{"id":94,"name":"Basic Join","slug":"join","hidden":false},{"id":133,"name":"Advanced Join","slug":"advanced-join","hidden":false},{"id":143,"name":"Alternative Queries","slug":"alternative-queries","hidden":false}],"selected":2},{"id":16,"slug":"databases","name":"Databases","chapters":[{"id":91,"name":"Relational Algebra","slug":"relational-algebra","hidden":false},{"id":93,"name":"Indexes","slug":"indexes","hidden":false},{"id":117,"name":"OLAP","slug":"olap","hidden":false},{"id":101,"name":"Set and Algebra","slug":"set-and-algebra","hidden":false},{"id":130,"name":"NoSQL - XML, MapReduce","slug":"xpath-queries","hidden":false},{"id":131,"name":"Database Normalization","slug":"database-normalization","hidden":false}],"selected":2},{"id":21,"slug":"distributed-systems","name":"Distributed Systems","chapters":[{"id":103,"name":"Multiple Choice","slug":"distributed-mcq","hidden":false},{"id":104,"name":"Client Server","slug":"client-server","hidden":false},{"id":111,"name":"MapReduce Basics","slug":"mapreduce-basics","hidden":false}],"selected":2},{"id":6,"slug":"shell","name":"Linux Shell","chapters":[{"id":56,"name":"Bash","slug":"bash","hidden":false},{"id":57,"name":"Text Processing","slug":"textpro","hidden":false},{"id":114,"name":"Arrays in Bash","slug":"arrays-in-bash","hidden":false},{"id":115,"name":"Grep Sed Awk","slug":"grep-sed-awk","hidden":false}],"selected":2},{"id":5,"slug":"fp","name":"Functional Programming","chapters":[{"id":27,"name":"Introduction","slug":"intro","hidden":false},{"id":26,"name":"Recursion","slug":"fp-recursion","hidden":false},{"id":45,"name":"Functional Structures","slug":"ds","hidden":false},{"id":40,"name":"Memoization and DP","slug":"dp","hidden":false},{"id":50,"name":"Persistent Structures","slug":"persistent-ds","hidden":false},{"id":41,"name":"Ad Hoc","slug":"misc","hidden":false},{"id":46,"name":"Parsers","slug":"parsers","hidden":false},{"id":48,"name":"Interpreter and Compilers","slug":"compilers","hidden":false}],"selected":2},{"id":30,"slug":"reactjs","name":"React JS","chapters":[{"id":165,"name":"State Management","slug":"state-management","hidden":false},{"id":166,"name":"Controlled Components","slug":"controlled-components","hidden":false},{"id":167,"name":"API","slug":"api","hidden":false}],"selected":2},{"id":19,"slug":"regex","name":"Regex","chapters":[{"id":137,"name":"Introduction","slug":"re-introduction","hidden":false},{"id":141,"name":"Character Class","slug":"re-character-class","hidden":false},{"id":142,"name":"Repetitions","slug":"re-repetitions","hidden":false},{"id":140,"name":"Grouping and Capturing","slug":"grouping-and-capturing","hidden":false},{"id":144,"name":"Backreferences","slug":"backreferences","hidden":false},{"id":145,"name":"Assertions","slug":"assertions","hidden":false},{"id":138,"name":"Applications","slug":"re-applications","hidden":false}],"selected":2},{"id":26,"slug":"general-programming","name":"General Programming","chapters":[],"selected":2},{"id":20,"slug":"security","name":"Security","chapters":[{"id":102,"name":"Functions","slug":"functions","hidden":false},{"id":105,"name":"Terminology and Concepts","slug":"concepts","hidden":false},{"id":31,"name":"Cryptography","slug":"cryptography","hidden":false}],"selected":2}],"ab_tests":{"models":[{"id":122,"name":"react_migration","product":1,"variants":[{"id":372,"weight":0,"variant":"trm0"},{"id":373,"weight":1,"variant":"trm1"},{"id":374,"weight":1,"variant":"cnt1"},{"id":375,"weight":4,"variant":"trm2"},{"id":376,"weight":4,"variant":"cnt2"},{"id":377,"weight":5,"variant":"trm3"},{"id":378,"weight":5,"variant":"cnt3"},{"id":379,"weight":10,"variant":"trm4"},{"id":380,"weight":10,"variant":"cnt4"},{"id":381,"weight":10,"variant":"trm5"},{"id":382,"weight":10,"variant":"cnt5"},{"id":383,"weight":20,"variant":"trm6"},{"id":384,"weight":20,"variant":"cnt6"}],"hacker_variant":{"variant":"trm6","forced":false}},{"id":220,"name":"live-autocomplete-linting-new","product":1,"variants":[{"id":840,"weight":10,"variant":"disabled_small"},{"id":841,"weight":40,"variant":"disabled_large"},{"id":842,"weight":10,"variant":"enabled_small"},{"id":843,"weight":40,"variant":"enabled_large"}],"hacker_variant":{"variant":"enabled_small","forced":false}},{"id":225,"name":"new-full-screen","product":1,"variants":[{"id":874,"weight":0,"variant":"trm0"},{"id":875,"weight":10,"variant":"trm1"},{"id":876,"weight":10,"variant":"cnt1"},{"id":877,"weight":20,"variant":"trm2"},{"id":878,"weight":20,"variant":"cnt2"},{"id":879,"weight":20,"variant":"trm3"},{"id":880,"weight":20,"variant":"cnt3"}],"hacker_variant":{"variant":"trm3","forced":false}},{"id":234,"name":"onboarding-with-monaco","product":1,"variants":[{"id":951,"weight":0,"variant":"treatment0"},{"id":952,"weight":10,"variant":"treatment1"},{"id":953,"weight":10,"variant":"control1"},{"id":954,"weight":20,"variant":"treatment2"},{"id":955,"weight":20,"variant":"control2"},{"id":956,"weight":20,"variant":"treatment3"},{"id":957,"weight":20,"variant":"control3"}],"hacker_variant":{"variant":"control2","forced":false}},{"id":235,"name":"full-screen-dark-mode","product":1,"variants":[{"id":958,"weight":0,"variant":"dark_mode0"},{"id":959,"weight":10,"variant":"dark_mode1"},{"id":960,"weight":10,"variant":"normal_mode1"},{"id":961,"weight":20,"variant":"dark_mode2"},{"id":962,"weight":20,"variant":"normal_mode2"},{"id":963,"weight":20,"variant":"dark_mode3"},{"id":964,"weight":20,"variant":"normal_mode3"}],"hacker_variant":{"variant":"normal_mode3","forced":false}},{"id":236,"name":"job-listing-page-redesign","product":1,"variants":[{"id":965,"weight":0,"variant":"new_design0"},{"id":966,"weight":5,"variant":"new_design1"},{"id":967,"weight":5,"variant":"old_design1"},{"id":968,"weight":5,"variant":"new_design2"},{"id":969,"weight":5,"variant":"old_design2"},{"id":970,"weight":10,"variant":"new_design3"},{"id":971,"weight":10,"variant":"old_design3"},{"id":972,"weight":10,"variant":"new_design4"},{"id":973,"weight":10,"variant":"old_design4"},{"id":974,"weight":20,"variant":"new_design5"},{"id":975,"weight":20,"variant":"old_design5"}],"hacker_variant":{"variant":"old_design5","forced":false}},{"id":237,"name":"jobs-promotion-on-dashboard","product":1,"variants":[{"id":976,"weight":0,"variant":"show_promo0"},{"id":977,"weight":10,"variant":"show_promo1"},{"id":978,"weight":10,"variant":"dont_show_promo1"},{"id":979,"weight":40,"variant":"show_promo2"},{"id":980,"weight":40,"variant":"dont_show_promo2"}],"hacker_variant":{"variant":"dont_show_promo2","forced":false}},{"id":238,"name":"jobs-promotion-on-interview-prep","product":1,"variants":[{"id":981,"weight":0,"variant":"show_promo0"},{"id":982,"weight":10,"variant":"show_promo1"},{"id":983,"weight":10,"variant":"dont_show_promo1"},{"id":984,"weight":40,"variant":"show_promo2"},{"id":985,"weight":40,"variant":"dont_show_promo2"}],"hacker_variant":{"variant":"dont_show_promo1","forced":false}},{"id":239,"name":"skills-verification","product":1,"variants":[{"id":986,"weight":0,"variant":"show0"},{"id":987,"weight":5,"variant":"show1"},{"id":988,"weight":5,"variant":"dont_show1"},{"id":989,"weight":5,"variant":"show2"},{"id":990,"weight":5,"variant":"dont_show2"},{"id":991,"weight":10,"variant":"show3"},{"id":992,"weight":10,"variant":"dont_show3"},{"id":993,"weight":10,"variant":"show4"},{"id":994,"weight":10,"variant":"dont_show4"},{"id":995,"weight":20,"variant":"show5"},{"id":996,"weight":20,"variant":"dont_show5"}],"hacker_variant":{"variant":"show5","forced":false}},{"id":240,"name":"skills-verification-card-text","product":1,"variants":[{"id":997,"weight":20,"variant":"text_1"},{"id":998,"weight":20,"variant":"text_2"},{"id":999,"weight":20,"variant":"text_3"},{"id":1000,"weight":20,"variant":"text_4"},{"id":1001,"weight":20,"variant":"text_5"}],"hacker_variant":{"variant":"text_1","forced":false}},{"id":241,"name":"otp-verification","product":1,"variants":[{"id":1002,"weight":0,"variant":"show0"},{"id":1003,"weight":10,"variant":"show1"},{"id":1004,"weight":10,"variant":"dont_show1"},{"id":1005,"weight":20,"variant":"show2"},{"id":1006,"weight":20,"variant":"dont_show2"},{"id":1007,"weight":20,"variant":"show3"},{"id":1008,"weight":20,"variant":"dont_show3"}],"hacker_variant":{"variant":"show2","forced":false}},{"id":242,"name":"multiple-skills-verification","product":1,"variants":[{"id":1009,"weight":0,"variant":"show0"},{"id":1010,"weight":5,"variant":"show1"},{"id":1011,"weight":5,"variant":"dont_show1"},{"id":1012,"weight":5,"variant":"show2"},{"id":1013,"weight":5,"variant":"dont_show2"},{"id":1014,"weight":10,"variant":"show3"},{"id":1015,"weight":10,"variant":"dont_show3"},{"id":1016,"weight":10,"variant":"show4"},{"id":1017,"weight":10,"variant":"dont_show4"},{"id":1018,"weight":20,"variant":"show5"},{"id":1019,"weight":20,"variant":"dont_show5"}],"hacker_variant":{"variant":"dont_show3","forced":false}},{"id":243,"name":"codesandbox","product":1,"variants":[{"id":1020,"weight":0,"variant":"show0"},{"id":1021,"weight":5,"variant":"show1"},{"id":1022,"weight":5,"variant":"dont_show1"},{"id":1023,"weight":5,"variant":"show2"},{"id":1024,"weight":5,"variant":"dont_show2"},{"id":1025,"weight":10,"variant":"show3"},{"id":1026,"weight":10,"variant":"dont_show3"},{"id":1027,"weight":10,"variant":"show4"},{"id":1028,"weight":10,"variant":"dont_show4"},{"id":1029,"weight":10,"variant":"show5"},{"id":1030,"weight":10,"variant":"dont_show5"},{"id":1031,"weight":10,"variant":"show6"},{"id":1032,"weight":10,"variant":"dont_show6"}],"hacker_variant":{"variant":"dont_show4","forced":false}},{"id":244,"name":"projects-in-hrc","product":1,"variants":[{"id":1033,"weight":0,"variant":"show0"},{"id":1034,"weight":5,"variant":"show1"},{"id":1035,"weight":5,"variant":"dont_show1"},{"id":1036,"weight":5,"variant":"show2"},{"id":1037,"weight":5,"variant":"dont_show2"},{"id":1038,"weight":10,"variant":"show3"},{"id":1039,"weight":10,"variant":"dont_show3"},{"id":1040,"weight":10,"variant":"show4"},{"id":1041,"weight":10,"variant":"dont_show4"},{"id":1042,"weight":20,"variant":"show5"},{"id":1043,"weight":20,"variant":"dont_show5"}],"hacker_variant":{"variant":"show3","forced":false}}]},"in_maintenance_mode":false,"maintenance_details":{"notification_start":1495931400,"maintenance_start":1496017800,"maintenance_end":1496021400,"api_message":"We are performing scheduled maintenance on our servers. Please refer to https://updates.hackerrank.com/scheduled-maintenance-on-may-28th-2018-at-530pm-pt/ for more details."},"feature_feedback_list":[],"admin_su":null,"badge_map":{"algorithms":["problem-solving"],"data-structures":["problem-solving"],"cpp":["cpp"],"java":["java"],"python":["python"],"sql":["sql"],"c":["c"],"ruby":["ruby"],"30-days-of-code":["30-days-of-code"],"10-days-of-javascript":["10-days-of-javascript"],"10-days-of-statistics":["10-days-of-statistics"]},"feature_flags":{}};
      HR.MANIFEST_HASH = "258c285f48d32f06117913c152075cfa239e4d61";
    </script>

    <link rel="alternate" type="application/rss+xml" title="RSS" href="https://www.hackerrank.com/rest/blogs.rss">
<style>._3vFA8--container{height:0;width:100%;position:relative;background:radial-gradient(44.6% 929.87% at 22.02% 63.39%,#ae6fff 0,#8d35fd 100%);cursor:pointer;overflow:hidden;transition:.8s}._3vFA8--container .AeJ0I--row{padding:11px;margin:0 auto;width:-webkit-max-content;width:-moz-max-content;width:max-content}._3vFA8--container .AeJ0I--row ._1yCun--logo{position:relative;width:51px;height:39px;float:left;margin-right:104px;background:url(data:image/svg+xml;base64,PHN2ZyB3aWR0aD0iNTAiIGhlaWdodD0iNDEiIGZpbGw9Im5vbmUiIHhtbG5zPSJodHRwOi8vd3d3LnczLm9yZy8yMDAwL3N2ZyI+PHBhdGggZmlsbC1ydWxlPSJldmVub2RkIiBjbGlwLXJ1bGU9ImV2ZW5vZGQiIGQ9Ik0xNy40MDQgOC43TDEuNDU0IDM2LjMyNWMtLjI1OC40NDctLjM4Ny42Ny0uNDUxLjgzOWEyLjIzNiAyLjIzNiAwIDAwMS43MzMgMy4wMDFjLjE3OC4wMy40MzYuMDMuOTUyLjAzLjEwNiAwIC4xNTggMCAuMjEtLjAwM2EyLjIzNyAyLjIzNyAwIDAwMS4yNTItLjQ1Mmw2Ljg1OS00LjcyMWMuNDczLS4zLjkwOC0uNjU0IDEuMjk2LTEuMDUyLjM1NC4wOC43MjcuMTg1IDEuMTQ1LjMwMSAxLjk1LjU0NCA0Ljg4MyAxLjM2IDExLjUxNiAxLjM2IDcuNjcyIDAgMTAuNjEtLjg3NCAxMi4xNTQtMS40NzEuMzguMzQzLjc5Ni42NDYgMS4yNDQuOTA0bDcuNDg4IDQuODE0Yy4zMjQuMjA4LjcwMi4zMiAxLjA4OC4zMiAxLjU1IDAgMi41MTgtMS42NzggMS43NDMtMy4wMkwzMy4yNDIgOC43Yy0yLjU3LTQuNDUyLTMuODU2LTYuNjc5LTUuNTI1LTcuNDQzYTUuNzUxIDUuNzUxIDAgMDAtNC43ODggMGMtMS42NjkuNzY0LTIuOTU0IDIuOTktNS41MjUgNy40NDN6bTguNTYyIDIyLjUyNGMtNC4yNDYgMC03LjU0OC0uNTk4LTkuOTI1LTEuNTM0bC4wMDEtLjAwMmMtLjU2MS0uMjQtMS40MjItLjc4My0xLjIyOC0xLjI5NS4xOTctLjUyIDEuNDQ0LS41MDcgMi4xOC0uMzRsNS4wNzYtOC43MiAzLjU1LTIuNTQ0LTIuMjUuMzEuMDE0LS4wMjMtMi40NTMuMjdjLS40NC4wNS0uNjU4LjA3My0uNzU0LjAwNGEuMzA0LjMwNCAwIDAxLS4xMjMtLjI3MmMuMDEtLjExNy4xNzItLjI2Ni40OTYtLjU2NCAxLjMwNS0xLjE5OCAzLjM3Mi0zLjA5IDMuNzQ3LTMuMzk4YTEuNDM4IDEuNDM4IDAgMDEyLjIwMy40NzhsNy4zMTcgMTMuNDc4Yy45MjItLjI0NCAyLjMwOC0uMzU2IDIuNDU1LjQ4OC4xMy43NDMtLjYwNyAxLjI1OS0yLjM2NyAyLjAyNC0xLjcyMy44LTQuNjY3IDEuNjQtNy45MzkgMS42NHoiIGZpbGw9IiNmZmYiLz48L3N2Zz4=)}._3vFA8--container .AeJ0I--row ._1yCun--logo ._2GogZ--stars ._1ErQY--star-1,._3vFA8--container .AeJ0I--row ._1yCun--logo ._2GogZ--stars ._2JsUk--star-2,._3vFA8--container .AeJ0I--row ._1yCun--logo ._2GogZ--stars ._181pR--star-3{position:absolute}._3vFA8--container .AeJ0I--row ._1yCun--logo ._2GogZ--stars ._1ErQY--star-1{background:url("data:image/svg+xml;base64,PHN2ZyB3aWR0aD0iMTIwIiBoZWlnaHQ9IjU2IiBmaWxsPSJub25lIiB4bWxucz0iaHR0cDovL3d3dy53My5vcmcvMjAwMC9zdmciPjxnIGZpbHRlcj0idXJsKCNmaWx0ZXIwX2QpIj48cGF0aCBkPSJNNTUuNjU1IDM3LjAyNWMuNDc0LTEuNjMgMi41ODYtMi4wNTUgMy42NTMtLjczNWwzLjU4NSA0LjQzNWMuNDE0LjUxMiAxLjA0My44IDEuNy43OGw1LjctLjE3OGMxLjY5OC0uMDUzIDIuNzU1IDEuODI0IDEuODI5IDMuMjQ4bC0zLjExIDQuNzhhMi4xMDIgMi4xMDIgMCAwMC0uMjE3IDEuODU4bDEuOTMxIDUuMzY2Yy41NzUgMS41OTgtLjg4NCAzLjE4My0yLjUyNCAyLjc0MmwtNS41MDctMS40ODFhMi4xMDIgMi4xMDIgMCAwMC0xLjgzNC4zNjlsLTQuNTA3IDMuNDk0Yy0xLjM0MiAxLjA0LTMuMy4xNDMtMy4zODctMS41NTNsLS4yOTQtNS42OTVhMi4xMDIgMi4xMDIgMCAwMC0uOTE3LTEuNjNsLTQuNzE3LTMuMjA3Yy0xLjQwNC0uOTU1LTEuMTU1LTMuMDk0LjQzLTMuNzAybDUuMzI3LTIuMDM4YTIuMTAyIDIuMTAyIDAgMDAxLjI2Ny0xLjM3N2wxLjU5Mi01LjQ3NnoiIGZpbGw9IiNGRkQ2MDAiLz48L2c+PGRlZnM+PGZpbHRlciBpZD0iZmlsdGVyMF9kIiB4PSIuMTI3IiB5PSItMTEuMDkiIHdpZHRoPSIxMTkuMzI3IiBoZWlnaHQ9IjExOC40NjIiIGZpbHRlclVuaXRzPSJ1c2VyU3BhY2VPblVzZSIgY29sb3ItaW50ZXJwb2xhdGlvbi1maWx0ZXJzPSJzUkdCIj48ZmVGbG9vZCBmbG9vZC1vcGFjaXR5PSIwIiByZXN1bHQ9IkJhY2tncm91bmRJbWFnZUZpeCIvPjxmZUNvbG9yTWF0cml4IGluPSJTb3VyY2VBbHBoYSIgdmFsdWVzPSIwIDAgMCAwIDAgMCAwIDAgMCAwIDAgMCAwIDAgMCAwIDAgMCAxMjcgMCIvPjxmZU9mZnNldC8+PGZlR2F1c3NpYW5CbHVyIHN0ZERldmlhdGlvbj0iMjIiLz48ZmVDb2xvck1hdHJpeCB2YWx1ZXM9IjAgMCAwIDAgMSAwIDAgMCAwIDEgMCAwIDAgMCAxIDAgMCAwIDAuNSAwIi8+PGZlQmxlbmQgaW4yPSJCYWNrZ3JvdW5kSW1hZ2VGaXgiIHJlc3VsdD0iZWZmZWN0MV9kcm9wU2hhZG93Ii8+PGZlQmxlbmQgaW49IlNvdXJjZUdyYXBoaWMiIGluMj0iZWZmZWN0MV9kcm9wU2hhZG93IiByZXN1bHQ9InNoYXBlIi8+PC9maWx0ZXI+PC9kZWZzPjwvc3ZnPg==");width:120px;height:56px;top:-12px;left:-103px;background-size:120px 56px}._3vFA8--container .AeJ0I--row ._1yCun--logo ._2GogZ--stars ._2JsUk--star-2{background:url("data:image/svg+xml;base64,PHN2ZyB3aWR0aD0iMTE1IiBoZWlnaHQ9IjU2IiBmaWxsPSJub25lIiB4bWxucz0iaHR0cDovL3d3dy53My5vcmcvMjAwMC9zdmciPjxnIGZpbHRlcj0idXJsKCNmaWx0ZXIwX2QpIj48cGF0aCBkPSJNNTguMzg4LTUuNjljLjg4NS0xLjAyNSAyLjU1Ny0uNjMzIDIuODkzLjY3OUw2Mi40MS0uNjA2Yy4xMy41MDguNDkuOTI2Ljk3NCAxLjEzbDQuMTkzIDEuNzYxYzEuMjQ4LjUyNCAxLjM5MiAyLjIzNi4yNDggMi45NjFsLTMuODQgMi40MzVjLS40NDQuMjgtLjczLjc1My0uNzc0IDEuMjc2bC0uMzggNC41MzFjLS4xMTMgMS4zNS0xLjY5NiAyLjAxNS0yLjc0IDEuMTUxbC0zLjUwMS0yLjlhMS42NzYgMS42NzYgMCAwMC0xLjQ1My0uMzQxbC00LjQyNyAxLjA0Yy0xLjMxOC4zMDktMi40NC0uOTkyLTEuOTQxLTIuMjVsMS42NzYtNC4yMjhhMS42NzYgMS42NzYgMCAwMC0uMTI0LTEuNDg3TDQ3Ljk2NC41ODRjLS43MDItMS4xNTguMTg5LTIuNjI3IDEuNTQtMi41NDFsNC41MzguMjg4YTEuNjc2IDEuNjc2IDAgMDAxLjM3Ni0uNTc4bDIuOTctMy40NDN6IiBmaWxsPSIjRkZENjAwIi8+PC9nPjxkZWZzPjxmaWx0ZXIgaWQ9ImZpbHRlcjBfZCIgeD0iLjk2MiIgeT0iLTUyLjY2OCIgd2lkdGg9IjExMy40NzciIGhlaWdodD0iMTEyLjgyMSIgZmlsdGVyVW5pdHM9InVzZXJTcGFjZU9uVXNlIiBjb2xvci1pbnRlcnBvbGF0aW9uLWZpbHRlcnM9InNSR0IiPjxmZUZsb29kIGZsb29kLW9wYWNpdHk9IjAiIHJlc3VsdD0iQmFja2dyb3VuZEltYWdlRml4Ii8+PGZlQ29sb3JNYXRyaXggaW49IlNvdXJjZUFscGhhIiB2YWx1ZXM9IjAgMCAwIDAgMCAwIDAgMCAwIDAgMCAwIDAgMCAwIDAgMCAwIDEyNyAwIi8+PGZlT2Zmc2V0Lz48ZmVHYXVzc2lhbkJsdXIgc3RkRGV2aWF0aW9uPSIyMiIvPjxmZUNvbG9yTWF0cml4IHZhbHVlcz0iMCAwIDAgMCAxIDAgMCAwIDAgMSAwIDAgMCAwIDEgMCAwIDAgMC41IDAiLz48ZmVCbGVuZCBpbjI9IkJhY2tncm91bmRJbWFnZUZpeCIgcmVzdWx0PSJlZmZlY3QxX2Ryb3BTaGFkb3ciLz48ZmVCbGVuZCBpbj0iU291cmNlR3JhcGhpYyIgaW4yPSJlZmZlY3QxX2Ryb3BTaGFkb3ciIHJlc3VsdD0ic2hhcGUiLz48L2ZpbHRlcj48L2RlZnM+PC9zdmc+");width:114px;height:53px;left:9px;top:-12.63px;background-size:120px 62px}._3vFA8--container .AeJ0I--row ._1yCun--logo ._2GogZ--stars ._181pR--star-3{background:url("data:image/svg+xml;base64,PHN2ZyB3aWR0aD0iMTAzIiBoZWlnaHQ9IjU2IiBmaWxsPSJub25lIiB4bWxucz0iaHR0cDovL3d3dy53My5vcmcvMjAwMC9zdmciPjxnIGZpbHRlcj0idXJsKCNmaWx0ZXIwX2QpIj48cGF0aCBkPSJNNTEuODAyIDM2LjA5OGMxLjA5OS0xLjQ5MSAzLjQyLTEuMTMyIDQuMDE2LjYyMmwyLjAwMSA1Ljg4N2MuMjMxLjY4Ljc2NyAxLjIxMSAxLjQ0OCAxLjQzN2w1LjkgMS45NjFjMS43NTguNTg0IDIuMTMzIDIuOTAzLjY1IDQuMDExbC00Ljk4IDMuNzIzYTIuMjkyIDIuMjkyIDAgMDAtLjkyIDEuODIxbC0uMDQyIDYuMjE4Yy0uMDEyIDEuODUyLTIuMTAxIDIuOTI2LTMuNjE0IDEuODU4bC01LjA4LTMuNTg3YTIuMjkyIDIuMjkyIDAgMDAtMi4wMTYtLjMxMmwtNS45MjYgMS44ODJjLTEuNzY1LjU2LTMuNDMyLTEuMDk1LTIuODgzLTIuODY0bDEuODQtNS45MzlhMi4yOTIgMi4yOTIgMCAwMC0uMzI1LTIuMDE0bC0zLjYyMi01LjA1NWMtMS4wNzgtMS41MDUtLjAxOS0zLjYwMSAxLjgzMy0zLjYyNmw2LjIxOC0uMDg1YTIuMjkyIDIuMjkyIDAgMDAxLjgxNC0uOTMybDMuNjg4LTUuMDA2eiIgZmlsbD0iI0ZGRDYwMCIvPjwvZz48ZGVmcz48ZmlsdGVyIGlkPSJmaWx0ZXIwX2QiIHg9Ii43ODgiIHk9Ii0xLjUzNCIgd2lkdGg9IjEwMi4xMzUiIGhlaWdodD0iMTAxLjEyOSIgZmlsdGVyVW5pdHM9InVzZXJTcGFjZU9uVXNlIiBjb2xvci1pbnRlcnBvbGF0aW9uLWZpbHRlcnM9InNSR0IiPjxmZUZsb29kIGZsb29kLW9wYWNpdHk9IjAiIHJlc3VsdD0iQmFja2dyb3VuZEltYWdlRml4Ii8+PGZlQ29sb3JNYXRyaXggaW49IlNvdXJjZUFscGhhIiB2YWx1ZXM9IjAgMCAwIDAgMCAwIDAgMCAwIDAgMCAwIDAgMCAwIDAgMCAwIDEyNyAwIi8+PGZlT2Zmc2V0Lz48ZmVHYXVzc2lhbkJsdXIgc3RkRGV2aWF0aW9uPSIxNy4yNDYiLz48ZmVDb2xvck1hdHJpeCB2YWx1ZXM9IjAgMCAwIDAgMSAwIDAgMCAwIDEgMCAwIDAgMCAxIDAgMCAwIDAuNSAwIi8+PGZlQmxlbmQgaW4yPSJCYWNrZ3JvdW5kSW1hZ2VGaXgiIHJlc3VsdD0iZWZmZWN0MV9kcm9wU2hhZG93Ii8+PGZlQmxlbmQgaW49IlNvdXJjZUdyYXBoaWMiIGluMj0iZWZmZWN0MV9kcm9wU2hhZG93IiByZXN1bHQ9InNoYXBlIi8+PC9maWx0ZXI+PC9kZWZzPjwvc3ZnPg==");width:114px;height:75px;left:34px;top:-12.63px;background-size:120px 57px}._3vFA8--container .AeJ0I--row ._2CXkc--title{float:left;width:-webkit-max-content;width:-moz-max-content;width:max-content;height:23px;font-family:Montserrat,sans-serif;font-style:normal;font-weight:400;font-size:18px;line-height:37px;color:#fff;text-shadow:0 0 16px #5600c5;margin-right:20px}._3vFA8--container .AeJ0I--row ._1CujY--btn{float:left;flex-direction:row;padding:6px 22px;width:111px;margin-top:-2px;height:38px;background:#ffd600;box-shadow:0 0 28px hsla(0,0%,100%,.5);border-radius:5px}._3vFA8--container .AeJ0I--row ._1CujY--btn ._2Wo2K--btnText{width:66px;height:14px;font-family:Montserrat,serif;font-style:normal;font-weight:600;font-size:11px;line-height:14px;text-align:center;letter-spacing:-.01em;color:#9645fd;align-self:center;margin:6px 0}</style><style type="text/css">.fp__btn{-webkit-box-sizing:border-box;-moz-box-sizing:border-box;box-sizing:border-box;display:inline-block;height:34px;padding:4px 30px 5px 40px;position:relative;margin-bottom:0;vertical-align:middle;-ms-touch-action:manipulation;touch-action:manipulation;cursor:pointer;-webkit-user-select:none;-moz-user-select:none;-ms-user-select:none;user-select:none;font-family:"Open Sans", sans-serif;font-size:12px;font-weight:600;line-height:1.42857143;color:#fff;text-align:center;white-space:nowrap;background:#ef4925;background-image:url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABIAAAAVCAYAAABLy77vAAAABGdBTUEAALGPC/xhBQAAAJRJREFUOBHNUcEWgCAIy14fbl9egK5MRarHQS7ocANmOCgWh1gdNERig1CgwPlLxkZuE80ndHlU+4Lda1zz0m01dSKtcz0h7qpQb7WR+HyrqRPxahzwwMqqkEVs6qnv+86NQAbcJlK/X+vMeMe7XcBOYaRzcbItUR7/8QgcykmElQrQPErnmxNxl2yyiwcgEvQUocIJaE6yERwqXDIAAAAASUVORK5CYII=");background-repeat:no-repeat;background-position:15px 6px;border:1px solid transparent;border-radius:17px}.fp__btn:hover{background-color:#d64533}.fp__btn::after{position:absolute;content:"";top:15px;right:14px;width:7px;height:4px;background:url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAcAAAAICAYAAAA1BOUGAAAABGdBTUEAALGPC/xhBQAAAGlJREFUCB1j/P//vw4DA4MiEKOD+0xAkatA/AJNBsS/ysTIyPgfyDgHxO+hCkD0Oag4RAhoPDsQm4NoqCIGBiBnAhBjAxNAkkxAvBZNFsQHuQesmxPIOQZVAKI54UZDFYgABbcBsQhMAgDIVGYSqZsn6wAAAABJRU5ErkJggg==");}.fp__btn:hover::after{background-position:0 -4px;}.fp__btn:active,.fp__btn:focus{outline:none}@media only screen and (min--moz-device-pixel-ratio: 2), only screen and (-o-min-device-pixel-ratio: 2 / 1), only screen and (-webkit-min-device-pixel-ratio: 2), only screen and (min-device-pixel-ratio: 2){.fp__btn{background-image:url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAACQAAAAqCAYAAADbCvnoAAAABGdBTUEAALGPC/xhBQAAAQFJREFUWAntWEESwjAIbBwfHl+upNoRNjKUJhk5kIvZQGG7bHOwPGltgdYtEJedShKyJnLHhEILz1Zi9HCOzFI7FUqFLAWseDgPdfeQ9QZ4b1j53nstnEJJyBqx20NeT1gEMB5uZG6Fzn5lV5UMp1ASQhMjdnvoqjewsYbDjcytEH5lsxULp1AS0sx8nJfVnjganf3NkVlKhVPIfQ9Zb6jF0atK3mNriXwpicPHvIeyr3sTDA53VgpgH8BvMu1ZCCz7ew/7MPwlE4CQJPNnQj2ZX4SYlEPbVpsvKFZ5TOwhcRoUTQiwwhVjArPEqVvRhMCneMXzDk9lwYphIwrZZOihF32oehMAa1qSAAAAAElFTkSuQmCC");background-size:18px 21px}.fp__btn::after{background:url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAA4AAAAQCAYAAAAmlE46AAAABGdBTUEAALGPC/xhBQAAANpJREFUKBWVkU8KglAYxJ/u3HuBwmUX8BqepKN4ka4RguDOVYu2QVCrhIJ6/caekqLiGxi+PzPD58PAWrszxmygD84h7hpePFLy1mEQBJamgvcVYXkqZXTR0LwpJWw0z0Ba6bymDcrI4kkp4EvzCNoVztNKfVATwoOiyx/NDup1SVqPQVBbDDeK3txBb9JuHfhNW3HWjZhDX+SGRAgPHkl5f0+kieBxRVieaPD5LGJ4WghLiwehbkBI4HUirF3S+SYrhhQ2f2H16aR5vMSYwbdjNtYXZ0J7cc70BXnFMHIGznzEAAAAAElFTkSuQmCC");background-size:7px 8px;}}</style></head>

<body id="hr_v2" class="show-cookie-banner" itemscope="" itemtype="http://schema.org/WebPage" style="zoom: 1;">
      <div class="cdn-error-view" style="display:none;">
  <div class="error-box-wrap">
    <div class="error-icon">
      <svg x="0px" y="0px" width="80px" height="80px" viewBox="0 0 367.011 367.01" style="enable-background:new 0 0 367.011 367.01;" xml:space="preserve">
        <g>
         <g>
          <path d="M365.221,329.641L190.943,27.788c-1.542-2.674-4.395-4.318-7.479-4.318c-3.084,0-5.938,1.645-7.48,4.318L1.157,330.584    c-1.543,2.674-1.543,5.965,0,8.639c1.542,2.674,4.395,4.318,7.48,4.318h349.65c0.028,0,0.057,0,0.086,0    c4.77,0,8.638-3.863,8.638-8.639C367.011,332.92,366.342,331.1,365.221,329.641z M23.599,326.266L183.464,49.381l159.864,276.885    H23.599z"></path>
          <path d="M174.826,136.801v123.893c0,4.773,3.867,8.638,8.638,8.638c4.77,0,8.637-3.863,8.637-8.638V136.801    c0-4.766-3.867-8.637-8.637-8.637C178.693,128.165,174.826,132.036,174.826,136.801z"></path>
          <path d="M183.464,279.393c-5.922,0-10.725,4.8-10.725,10.722s4.803,10.729,10.725,10.729c5.921,0,10.725-4.809,10.725-10.729    C194.189,284.193,189.386,279.393,183.464,279.393z"></path>
         </g>
        </g>
      </svg>
    </div>
    <h2 class="error-title">Something went wrong!</h2>
    <p class="error-message">Some error occured while loading page for you. Please try again.</p>
    <div class="btn-wrap">
      <a href="https://www.hackerrank.com/#" onclick="window.location.reload(true);"><button class="btn-reload">Reload</button></a>
    </div>
  </div>
</div>
<script>
  if(typeof cdnLoaded !== 'undefined' && cdnLoaded === false){
    document.querySelector('.cdn-error-view').style.display = 'block';
  }
</script>

    <script type="text/template" id="navigation">
    <% if(HR.util.showCookieBanner()) { %>
        <div class="cookie-banner-wrapper navigation-banner">
            <div class="cookie-d-flex container">
                <div class="cookie-message msL">We use cookies to ensure you have the best browsing experience on our website.
                    Please read our <a href="/privacy#cookies" target="_blank" class="cookie-link">cookie policy</a> for more information about how we use cookies.
                </div>
                <button class="ui-btn-secondary cookie-accept-btn"><span class="ui-text">Ok</span></button>
            </div>
        </div>
    <% } %>
    <div class="page-header-wrapper theme-m-section">
        <nav class="community-header">
            <div class="container">
                <span class="nav-links theme-m-section"></span>
                <span class="nav-buttons theme-m-section"></span>
            </div>
        </nav>
    </div>
</script>

<script type="text/template" id="nav-links">
    <ul class="nav-links">
        <li class="nav-link-item logo-wrap">
            <a href="/dashboard" class="nav_link backbone logo_mark js_logo_mark logo-link" data-analytics="NavBarLogo"><img id="feed-intro" class="logo-img-small" src="<%- asset_path('brand/logo-new-white-green.svg') %>" alt=""/></a>
        </li>
        <li class="nav-link-item">
            <a href="/dashboard" class="nav-link domains" data-analytics="NavBarDomains">
              <span>PRACTICE</span>
            </a>
        </li>
        <li class="nav-link-item">
            <a href="/contests" class="nav-link contests" data-analytics="NavBarContests">
              <span>COMPETE</span>
            </a>
        </li>
        <li class="nav-link-item">
            <a href="/jobs/search" class="nav-link" data-analytics="NavBarJobs">
              <span>JOBS</span>
              <i class="icon-circle js-jobs-notification navigation-highlight-icon hidden"></i>
            </a>
        </li>
        <li class="nav-link-item">
            <a href="/leaderboard" class="nav-link" data-analytics="NavBarLeaderboard" id='leaderboard-nav-link'>
              <span>LEADERBOARD</span>
            </a>
        </li>
    </ul>
</script>

<script type="text/template" id="nav-search">
    <div class="hide-in-private-contest search-input input-icon">
        <input type="text" id="search-text" class="new-search-query" autocomplete="off" data-analytics="NavBarSearchBox" placeholder="Search">
        <i class="icon-search"></i>
    </div>
    <div class="hide-in-private-contest search-result hide">
        <ul class="unstyled"></ul>
    </div>
</script>

<script type="text/template" id="nav-buttons">
    <ul class="pull-left psR">
        <li class="hide-in-private-contest search-input-container input-icon main-hr-search" id="search-span">
            <div class="search_form new-search theme-m-content"></div>
        </li>
    </ul>
    <% if (profile && profile.isLoggedIn()) { %>
        <ul class="pull-left nav-wrap mmL">

            <li class="hide-in-private-contest notify_dropdown notify-dropdown dropdown message-dropdown theme-m-content" id="tab-profile-messages">
                <a class="cursor backbone nav_link hr_nav_messages_link" data-toggle="dropdown" data-analytics="NavBarMessageIcon">
                    <i class="icon-theme-m-message icon--single"></i>
                    <span class="indicator number-indicator hr_messages_count hidden"></span>
                </a>
                <div class="dropdown-menu large theme-m-dropdown">
                    <header class="psT psB text-center menu-header">
                        <strong className="header-title">Messages</strong>
                    </header>
                        <div id="notify_messages" class="dropdown-body">
                            <ul></ul>
                        </div>
                    <footer class="final text-center show-all">
                        <a class="btn backbone show-all-link" href="/inbox" data-analytics="NavBarMessageShowAll">Show All</a>
                    </footer>
                </div>
            </li>
            <li class="dropdown notify_dropdown theme-m-content" id="tab-profile-notifs">
                <a class="cursor backbone nav_link hr_nav_notifications_link" data-toggle="dropdown" data-analytics="NavBarNotificationsIcon">
                    <i class="icon-theme-m-notification icon--single"></i>
                    <span class="indicator number-indicator hr_notifications_count hidden"></span>
                </a>
                <div class="dropdown-menu large theme-m-dropdown" id="notify_broadcasts">
                    <header class="psA">
                        <strong>Notifications</strong>
                        <a class="hr_archive_all archive pull-right" data-analytics="NavBarNotificationsArchiveAll"><i class="icon-folder-open"></i>Archive All</a>
                    </header>
                    <div class="clearfix dropdown-body">
                        <ul class="hr_nav_notifications_list">
                        </ul>
                    </div>
                    <footer class="final text-center show-all">
                        <a class="btn backbone show-all-link" href="/notifications" data-analytics="NavBarNotificationsShowAll">Show All</a>
                    </footer>
                </div>
            </li>
            <li class="dropdown-auth">
                <div class="dropdown theme-m-content profile-menu-item" id="profile-menu">
                    <a class="backbone nav_link dropdown-toggle" href="" data-toggle="dropdown" data-analytics="NavBarProfileDropDown">
                        <img src="<%= _profile.avatar %>" alt="" class="avatar" onerror="this.onerror=null; this.src='https://d3rpyts3de3lx8.cloudfront.net/hackerrank/assets/gravatar.jpg';">
                        <span class="mmR profile-username"><%- _profile.username %></span>
                        <i class="icon-down-open"></i>
                    </a>
                    <div class="dropdown-menu drop-list pull-right">
                        <ul>
                            <li class="hide-in-private-contest profile-nav-item"><a class="navigation_hackos hackos-count backbone" href="/<%- _profile.username %>/hackos" data-analytics="NavBarProfileDropDownHackos">Hackos: <span class="navigation_hackos-count"><%= _profile.hacko_amount %></span></a></li>
                            <li class="hide-in-private-contest profile-nav-item">
                                <a class="backbone" rel="tooltip" data-placement="left" href="/<%- _profile.username %>" data-analytics="NavBarProfileDropDownProfile">
                                    Profile
                                    <!-- NOTE also add title="x% complete" to profile link-->
                                    <div class="ui-progress-bar theme-progress-bar">
                                        <div class="progress-filler" style="width: <%= _profileProgress %>%;"></div>
                                    </div>
                                </a>
                            </li>
                            <li class="hide-in-private-contest profile-nav-item"><a class="backbone" href="/settings" data-analytics="NavBarProfileDropDownSettings">Settings</a></li>
                            <li class="hide-in-private-contest profile-nav-item"><a class="backbone" href="/challenges/bookmarks" data-analytics="NavBarDropDownBookmarks">Bookmarks</a></li>
                            <% if (HR.ABTest && HR.ABTest.is_variant("hrc-code-snippets", "trm1")){ %>
                                <li class="hide-in-private-contest profile-nav-item"><a href="/snippets" data-analytics="NavBarProfileDropDownCodeSnippets">Code Snippets</a></li>
                            <% } %>
                            <li class="hide-in-private-contest profile-nav-item"><a class="backbone" href="/network" data-analytics="NavBarProfileDropDownNetwork">Network</a></li>
                            <li class="hide-in-private-contest profile-nav-item"><a class="backbone" href="/submissions" data-analytics="NavBarProfileDropDownSubmissions">Submissions</a></li>
                            <li class="hide-in-private-contest profile-nav-item"><a class="backbone" href="/administration" data-analytics="NavBarProfileDropDownAdministration">Administration</a></li>
                            <li class="profile-nav-item"><a class="logout-button" data-analytics="NavBarProfileDropDownLogout">Logout</a></li>
                        </ul>
                    </div>
                </div>
            </li>
        </ul>
    <% } %>
</script>

    <script type="text/template" id="breadcrumb">
    <% var counter = 0; %>
    <div class="content-header">
        <div class="container">
            <div class="clearfix">
                <ol itemscope itemtype="http://schema.org/BreadcrumbList" class="pull-left mdT msB pjT bcrumb">
                    <% var breadcrumb_level = 0; var levelValKeys = _.keys(level_values);%>
                    <% for (var index in level_values) { %>
                      <li itemprop="itemListElement" itemscope itemtype="http://schema.org/ListItem">
                        <% if (counter==0) {
                             counter = counter + 1;
                           } else { %>
                             <i class="icon-right-open mmL"></i>
                        <% } %>
                        <a itemprop="item" href="<%= level_values[index].url %>" class="backbone"
                           data-analytics="Breadcrumb" data-attr1="<%- level_values[index].text %>"
                           data-attr2="<%= index %>" data-attr7="<%= breadcrumb_level += 1 %>"><span itemprop="name"><%- level_values[index].text %></span></a>
                        <meta itemprop="position" content="<%- breadcrumb_level %>" />
                      </li>
                    <% } %>
                </ol>
                 <div class="pull-right hide domain-scores">
                    <div class="pull-left badge-progress">
                    </div>
                    <div class="pull-right pdT brcumb-points">
                        <span class="zeta bold">Points: </span><span class="bold domain-score"></span>
                        <span class="domain-rank-span">
                            <span class="zeta bold">Rank: </span><span class="bold msR domain-rank "></span>
                        </span>
                    </div>
                 </div>
                <div class="social-share-wrap-2 hide"></div>
            </div>
        </div>
    </div>
</script>


    <div id="wrapper" class="theme-m-content" style="min-height: 544px;">
        <div id="navigation">
    
    <div class="page-header-wrapper theme-m-section">
        <nav class="community-header">
            <div class="container">
                <span class="nav-links theme-m-section">
    <ul class="nav-links">
        <li class="nav-link-item logo-wrap">
            <a href="https://www.hackerrank.com/dashboard?h_r=logo" class="nav_link backbone logo_mark js_logo_mark logo-link" data-analytics="NavBarLogo"><img id="feed-intro" class="logo-img-small" src="./Find_the_fourth_files/logo-new-white-green-2c9c8c292fa40bd4042799e6817e74d6.svg" alt=""></a>
        </li>
        <li class="nav-link-item">
            <a href="https://www.hackerrank.com/dashboard" class="nav-link domains" data-analytics="NavBarDomains">
              <span>PRACTICE</span>
            </a>
        </li>
        <li class="nav-link-item">
            <a href="https://www.hackerrank.com/contests" class="nav-link contests active" data-analytics="NavBarContests">
              <span>COMPETE</span>
            </a>
        </li>
        <li class="nav-link-item">
            <a href="https://www.hackerrank.com/jobs/search" class="nav-link" data-analytics="NavBarJobs">
              <span>JOBS</span>
              <i class="icon-circle js-jobs-notification navigation-highlight-icon hidden"></i>
            </a>
        </li>
        <li class="nav-link-item">
            <a href="https://www.hackerrank.com/leaderboard" class="nav-link" data-analytics="NavBarLeaderboard" id="leaderboard-nav-link">
              <span>LEADERBOARD</span>
            </a>
        </li>
    </ul>
</span>
                <span class="nav-buttons theme-m-section">
    <ul class="pull-left psR">
        <li class="hide-in-private-contest search-input-container input-icon main-hr-search" id="search-span">
            <div class="search_form new-search theme-m-content">
    <div class="hide-in-private-contest search-input input-icon">
        <input type="text" id="search-text" class="new-search-query ui-autocomplete-input" autocomplete="off" data-analytics="NavBarSearchBox" placeholder="Search">
        <i class="icon-search"></i>
    </div>
    <div class="hide-in-private-contest search-result hide" style="display: block;">
        <ul class="unstyled"></ul>
    </div>
</div>
        </li>
    </ul>
    
        <ul class="pull-left nav-wrap mmL">

            <li class="hide-in-private-contest notify_dropdown notify-dropdown dropdown message-dropdown theme-m-content" id="tab-profile-messages">
                <a class="cursor backbone nav_link hr_nav_messages_link" data-toggle="dropdown" data-analytics="NavBarMessageIcon">
                    <i class="icon-theme-m-message icon--single"></i>
                    <span class="indicator number-indicator hr_messages_count hidden"></span>
                </a>
                <div class="dropdown-menu large theme-m-dropdown">
                    <header class="psT psB text-center menu-header">
                        <strong classname="header-title">Messages</strong>
                    </header>
                        <div id="notify_messages" class="dropdown-body">
                            <ul></ul>
                        </div>
                    <footer class="final text-center show-all">
                        <a class="btn backbone show-all-link" href="https://www.hackerrank.com/inbox" data-analytics="NavBarMessageShowAll">Show All</a>
                    </footer>
                </div>
            </li>
            <li class="dropdown notify_dropdown theme-m-content" id="tab-profile-notifs">
                <a class="cursor backbone nav_link hr_nav_notifications_link" data-toggle="dropdown" data-analytics="NavBarNotificationsIcon">
                    <i class="icon-theme-m-notification icon--single"></i>
                    <span class="indicator number-indicator hr_notifications_count hidden"></span>
                </a>
                <div class="dropdown-menu large theme-m-dropdown" id="notify_broadcasts">
                    <header class="psA">
                        <strong>Notifications</strong>
                        <a class="hr_archive_all archive pull-right" data-analytics="NavBarNotificationsArchiveAll"><i class="icon-folder-open"></i>Archive All</a>
                    </header>
                    <div class="clearfix dropdown-body">
                        <ul class="hr_nav_notifications_list">
                        </ul>
                    </div>
                    <footer class="final text-center show-all">
                        <a class="btn backbone show-all-link" href="https://www.hackerrank.com/notifications" data-analytics="NavBarNotificationsShowAll">Show All</a>
                    </footer>
                </div>
            </li>
            <li class="dropdown-auth">
                <div class="dropdown theme-m-content profile-menu-item" id="profile-menu">
                    <a class="backbone nav_link dropdown-toggle" href="https://www.hackerrank.com/" data-toggle="dropdown" data-analytics="NavBarProfileDropDown">
                        <img src="./Find_the_fourth_files/gravatar.jpg" alt="" class="avatar" onerror="this.onerror=null; this.src=&#39;https://d3rpyts3de3lx8.cloudfront.net/hackerrank/assets/gravatar.jpg&#39;;">
                        <span class="mmR profile-username">saurabhlht112</span>
                        <i class="icon-down-open"></i>
                    </a>
                    <div class="dropdown-menu drop-list pull-right">
                        <ul>
                            <li class="hide-in-private-contest profile-nav-item"><a class="navigation_hackos hackos-count backbone" href="https://www.hackerrank.com/saurabhlht112/hackos" data-analytics="NavBarProfileDropDownHackos">Hackos: <span class="navigation_hackos-count">508</span></a></li>
                            <li class="hide-in-private-contest profile-nav-item">
                                <a class="backbone" rel="tooltip" data-placement="left" href="https://www.hackerrank.com/saurabhlht112" data-analytics="NavBarProfileDropDownProfile">
                                    Profile
                                    <!-- NOTE also add title="x% complete" to profile link-->
                                    <div class="ui-progress-bar theme-progress-bar">
                                        <div class="progress-filler" style="width: 30%;"></div>
                                    </div>
                                </a>
                            </li>
                            <li class="hide-in-private-contest profile-nav-item"><a class="backbone" href="https://www.hackerrank.com/settings" data-analytics="NavBarProfileDropDownSettings">Settings</a></li>
                            <li class="hide-in-private-contest profile-nav-item"><a class="backbone" href="https://www.hackerrank.com/challenges/bookmarks" data-analytics="NavBarDropDownBookmarks">Bookmarks</a></li>
                            
                            <li class="hide-in-private-contest profile-nav-item"><a class="backbone" href="https://www.hackerrank.com/network" data-analytics="NavBarProfileDropDownNetwork">Network</a></li>
                            <li class="hide-in-private-contest profile-nav-item"><a class="backbone" href="https://www.hackerrank.com/submissions" data-analytics="NavBarProfileDropDownSubmissions">Submissions</a></li>
                            <li class="hide-in-private-contest profile-nav-item"><a class="backbone" href="https://www.hackerrank.com/administration" data-analytics="NavBarProfileDropDownAdministration">Administration</a></li>
                            <li class="profile-nav-item"><a class="logout-button" data-analytics="NavBarProfileDropDownLogout">Logout</a></li>
                        </ul>
                    </div>
                </div>
            </li>
        </ul>
    
</span>
            </div>
        </nav>
    </div>
</div>
        <div id="side-navigation"></div>
        <div id="verifyaccount"></div>
        <div id="ajax-msg-wrap"><div id="ajax-msg" style="margin-left: -50.5px; display: block;"><span class="ajax-loader ajax-loading"></span><span class="ajax-msg">Loading ...</span></div></div>
        <!--<div id="countdowntimer" style="display: none;"></div>-->
        <div id="breadcrumb" style="display: block;">
    
    <div class="content-header">
        <div class="container">
            <div class="clearfix">
                <ol itemscope="" itemtype="http://schema.org/BreadcrumbList" class="pull-left mdT msB pjT bcrumb">
                    
                    
                      <li itemprop="itemListElement" itemscope="" itemtype="http://schema.org/ListItem">
                        
                        <a itemprop="item" href="https://www.hackerrank.com/contests" class="backbone" data-analytics="Breadcrumb" data-attr1="All Contests" data-attr2="global" data-attr7="1"><span itemprop="name">All Contests</span></a>
                        <meta itemprop="position" content="1">
                      </li>
                    
                      <li itemprop="itemListElement" itemscope="" itemtype="http://schema.org/ListItem">
                        
                             <i class="icon-right-open mmL"></i>
                        
                        <a itemprop="item" href="https://www.hackerrank.com/contests/se-weekly-coding-div-a-13032020/challenges" class="backbone" data-analytics="Breadcrumb" data-attr1="SE_WEEKLY_CODING_DIV-A_08042020" data-attr2="contest" data-attr7="2"><span itemprop="name">SE_WEEKLY_CODING_DIV-A_08042020</span></a>
                        <meta itemprop="position" content="2">
                      </li>
                    
                      <li itemprop="itemListElement" itemscope="" itemtype="http://schema.org/ListItem">
                        
                             <i class="icon-right-open mmL"></i>
                        
                        <a itemprop="item" href="https://www.hackerrank.com/contests/se-weekly-coding-div-a-13032020/challenges/find-the-fourth" class="backbone" data-analytics="Breadcrumb" data-attr1="Find the Fourth" data-attr2="challenge" data-attr7="3"><span itemprop="name">Find the Fourth</span></a>
                        <meta itemprop="position" content="3">
                      </li>
                    
                </ol>
                 <div class="pull-right hide domain-scores" style="display: none;">
                    <div class="pull-left badge-progress">
                    </div>
                    <div class="pull-right pdT brcumb-points">
                        <span class="zeta bold">Points: </span><span class="bold domain-score"></span>
                        <span class="domain-rank-span">
                            <span class="zeta bold">Rank: </span><span class="bold msR domain-rank "></span>
                        </span>
                    </div>
                 </div>
                <div class="social-share-wrap-2 hide"></div>
            </div>
        </div>
    </div>
</div>
        <div id="flash"></div>
        <div id="followbanner"></div>
        <div id="submission-success-messages"></div>
        <div id="contestwide-broadcast"></div>
        <div id="content" class="main_content"><div class="challenge-view"><div>
   
    <div class="challenge-header"><div class="container">
    <div class="mdT mmB span10">
        <div class="clearfix">
            <h2 class="hr_tour-challenge-name pull-left mlT">
                Find the Fourth
                
                
            </h2>
            
            
            </div>
        </div>
        
    </div>

            

<div class="container">
    <ul class="nav-tabs nav mlT">

        <!-- Problem -->
        <li id="problemTab">
            <a class="hr-problem-link" href="https://www.hackerrank.com/contests/se-weekly-coding-div-a-13032020/challenges/find-the-fourth" data-analytics="ChallengeViewTab" data-attr1="find-the-fourth" data-attr2="Problem">Problem</a>
        </li>

        <!-- Expert (Live) -->
        

        <!-- Submissions -->
        
            <li id="submissionsTab" class="active">
                <a class="hr-submissions-link" href="https://www.hackerrank.com/contests/se-weekly-coding-div-a-13032020/challenges/find-the-fourth/submissions" data-analytics="ChallengeViewTab" data-attr1="find-the-fourth" data-attr2="Submissions">Submissions</a>
            </li>
        

        <!-- Leadeboard -->
        
            <li id="leaderboardTab">
                <a class="hr-leaderboard-link" href="https://www.hackerrank.com/contests/se-weekly-coding-div-a-13032020/challenges/find-the-fourth/leaderboard" data-analytics="ChallengeViewTab" data-attr1="find-the-fourth" data-attr2="Leaderboard">Leaderboard</a>
            </li>
        

        <!-- Discussion -->
        
            <li id="forumTab">
                <a class="hr-forum-link" href="https://www.hackerrank.com/contests/se-weekly-coding-div-a-13032020/challenges/find-the-fourth/forum" data-analytics="ChallengeViewTab" data-attr1="find-the-fourth" data-attr2="Discussions">Discussions</a>
            </li>
        

        <!-- Editorial -->
        

        <!-- Custom Pages -->
        

        <!-- Topics -->
        
    </ul>
</div>
</div>
    <style></style>
    <section class="challenge-interface">
        <div class="challenge-body">
          <div class="challenge-container-element challenge-container-elements-loading hidden">
            <div class="gray block-center">
              <div style="background: url(https://hrcdn.net/hackerrank/assets/hackerrank_spinner_64x64-d305605f2d7306772da0f86560bc1286.gif); height: 64px; width: 64px; display: inline-block;"></div>
            </div>
          </div>
        <div class="challenge-body-elements-submissions challenge-container-element">
    
    <section class="submissions container mjB">
        <div class="submissions_list text-center">
        
            <div class="table-wrap">
                <header class="row-clear list-header submissions_list-header">
                    <div class="span4">
                      <p class="submissions-title">Problem</p>
                    </div>
                    <div class="span2 submissions-language">
                      <p>Language</p>
                    </div>
                    <div class="span2 submissions-time">
                      <p>Time</p>
                    </div>
                    <div class="span3">
                      <p>Result</p>
                    </div>
                    <div class="span1">
                      <p>Score</p>
                    </div>
                    <div class="span2">
                      <p></p>
                    </div>
                </header>

                <div class="table-body submissions-list-wrapper table--striped small"><div class="submissions-list-view"><div class="clearfix row row-btn row-clear submissions_item">
    <div class="span4 submissions-title">
	    <p><a class="challenge-slug backbone root" href="https://www.hackerrank.com/contests/se-weekly-coding-div-a-13032020/challenges/find-the-fourth" data-analytics="SubmissionsListChallengeName" data-attr1="find-the-fourth">Find the Fourth</a></p>
    </div>
    <div class="span2 submissions-language">
	    <p class="small">C++</p>
    </div>
    <div class="span2 submissions-time">
	    <p class="small">an hour ago</p>
    </div>
    <div class="span3">
        
            <p class="small accepted">
                Accepted
                <i class="icon-ok"></i>
            </p>
        
    </div>
    <div class="span1">
        <p class="small">
            30
        </p>
    </div>
    
    
    <div class="span2 pull-right btn-wrap">
	    <p class="btn-wrap"><a href="https://www.hackerrank.com/contests/se-weekly-coding-div-a-13032020/challenges/find-the-fourth/submissions/code/1324155159" class="btn btn-inverse view-results backbone" data-analytics="SubmissionsListViewResults" data-attr1="find-the-fourth" data-attr2="" data-attr10="30">View Results</a></p>
    </div>
    
</div>
</div></div>

                <div class="mlT pagination-wrap clearfix pagination-wrapper"></div>
            </div>
            
          </div>
        
    </section>

</div></div>
    </section>
</div>
</div></div>
        <div id="hacker"></div>
    </div>
    <div id="autocomplete-container" style="position:absolute; width: 330px; z-index: 2000; padding-top: 1px;"><ul class="ui-autocomplete ui-front ui-menu ui-widget ui-widget-content theme-m-content" id="ui-id-252" tabindex="0" style="display: none;"></ul></div>
    <footer class="page_footer">
    <div>
        <div class="text-center">
            <p style="font-size: 14px; margin-top: 5px; margin-bottom: 0px;">
              <span class="internal-links">
                <a target="_blank" href="https://www.hackerrank.com/calendar?utm_source=website&amp;utm_medium=footer&amp;utm_campaign=website" class="calendar" data-analytics="FooterLinkCalendar">Contest Calendar</a>
                |
                <a target="_blank" href="https://www.hackerrank.com/interview/interview-preparation-kit?utm_source=website&amp;utm_medium=footer&amp;utm_campaign=website" class="interview-prep" data-analytics="FooterLinkCalendar">Interview Prep</a>
                |
                <a target="_blank" href="https://blog.hackerrank.com/" class="blog" data-analytics="FooterLinkBlog">Blog</a>
                |
                <a target="_blank" href="https://www.hackerrank.com/scoring" class="scoring" data-analytics="FooterLinkScoring">Scoring</a>
                |
                <a target="_blank" href="https://www.hackerrank.com/environment" class="environment" data-analytics="FooterLinkEnvironment">Environment</a>
                |
                <a target="_blank" href="https://www.hackerrank.com/faq" class="faq" data-analytics="FooterLinkFAQ">FAQ</a>
                |
              </span>
              <a target="_blank" href="https://www.hackerrank.com/aboutus" data-analytics="FooterLinkAboutUs">About Us</a>
              |
              <a target="_blank" href="https://help.hackerrank.com/hc/en-us" data-analytics="FooterLinkSupport">Support</a>
              |
              <a target="_blank" href="https://www.hackerrank.com/careers" data-analytics="FooterLinkCareers">Careers</a>
              |
              <a target="_blank" href="https://www.hackerrank.com/terms-of-service" data-analytics="FooterLinkTermsOfService">Terms Of Service</a>
              |
              <a target="_blank" href="https://www.hackerrank.com/privacy" data-analytics="FooterLinkPrivacyPolicy">Privacy Policy</a>
              |
              <a href="https://www.hackerrank.com/support/feature" target="_blank" class="featureRequestButton" data-analytics="FooterLinkFeatureRequest">Request a Feature</a>
            </p>
        </div>
    </div>
</footer>

    <ol id="hr_tour-intro-tour" class="hide">
        <li data-class="hr_tour-challenge-name" data-options="tipLocation:bottom"><h5 class="walkthrough-header">Challenge Walkthrough</h5><span class="walkthrough-text">Let's walk through this sample challenge and explore the features of the code editor.</span><span class="walkthrough-progress">1 of 6</span></li>
        <li data-class="hr_tour-problem-statement" data-options="tipLocation:top"><h5 class="walkthrough-header">Review the problem statement</h5><span class="walkthrough-text">Each challenge has a problem statement that includes sample inputs and outputs. Some challenges include additional information to help you out.</span><span class="walkthrough-progress">2 of 6</span></li>
        <li data-class="hr_tour-select-language" data-options="tipLocation:left"><h5 class="walkthrough-header">Choose a language</h5><span class="walkthrough-text">Select the language you wish to use to solve this challenge.</span><span class="walkthrough-progress">3 of 6</span></li>
        <li data-class="hr_tour-code-solution" data-options="tipLocation:top"><h5 class="walkthrough-header">Enter your code</h5><span class="walkthrough-text">Code your solution in our custom editor or code in your own environment and upload your solution as a file.</span><span class="walkthrough-progress">4 of 6</span></li>
        <li data-class="hr_tour-compile-test" data-options="tipLocation:left"><h5 class="walkthrough-header">Test your code</h5><span class="walkthrough-text">You can compile your code and test it for errors and accuracy before submitting.</span><span class="walkthrough-progress">5 of 6</span></li>
        <li data-class="hr_tour-submit-code" data-button="Done" data-options="tipLocation:left"><h5 class="walkthrough-header">Submit to see results</h5><span class="walkthrough-text">When you're ready, submit your solution! Remember, you can go back and refine your code anytime.</span><span class="walkthrough-progress">6 of 6</span></li>
    </ol>
    <ol id="hr_tour-intro-part-2-tour" class="hide">
        <li data-class="hr_tour-leaderboard">Check your score</li>
    </ol>
    <script type="text/javascript">
     // disable forum social interaction
     HR.disable_fsi = false;
    </script>

    <script type="text/javascript">
      // Setting up jobs constants for use in frontend
      // Jobs visa constants - visa's accepted by company
      HR.VISA_TYPE_NONE = 0
      HR.VISA_TYPE_ALL = 1
      HR.VISA_TYPE_US_RESIDENT = 2
    </script>

    <script type="text/javascript">
      HR.REACT_ROUTE_CONFIG = {
  "var1": [],
  "var2": [],
  "complete": [
    "^/domains/?.*$",
    "^/dashboard/?(\\?.*|$)",
    "^/interview((/|\\?).*|$)",
    "^/contests/((projecteuler)|(hourrank-[0-9]+))(/(?!(judge/)?submissions).*)?$",
    "^/contests/?((archived|college)(/\\d*)?)?/?(\\?.*|$)",
    "^/contestlanding/[a-z0-9]+(-[a-z0-9]+)*/(welcome|registration|rules)$",
    "^/terms-of-service/?(\\?.*|$)",
    "^/faq-hacker-level/?(\\?.*|$)",
    "^/privacy/?(\\?.*|$)",
    "^/leaderboard((/|\\?).*|$)",
    "^/skills-verification((/|\\?).*|$)",
    "^/settings/phone((/|\\?).*|$)",
    "^/work/login($|\\?|/).*",
    "^/work/tests((/|\\?).*|$)",
    "^/work/settings((/|\\?).*|$)",
    "^/work/settings/data-manager((/|\\?).*|$)",
    "^/jobs/search/?(\\?.*|$)",
    "^/jobs/dashboard/.+$",
    "^/environment(/?.*|$)",
    "^/work/library((/|\\?).*|$)",
    "^/work/projects((/|\\?).*|$)",
    "^/work/teams((/|\\?).*|$)",
    "^/calendar/?(\\?.*|$)",
    "^/snippets((/.*)|(\\?.*)|$)",
    "^/feed/?(\\?.*|$)",
    "^/challenges/([^/]+?)(?!/(topics))((/?\\?.*|$)|/.*)",
    "^/404$",
    "^/onboarding/?.*$",
    "^/profile/.*$",
    "^/scoring($|\\?|/).*",
    "^/companies/.+$",
    "^(/auth)?/(login|signup)((/.*)*|\\?.*)$",
    "^/auth/(forgot_password|reset_password)/?(\\?.*|$)",
    "^/work/reset_password/(.*|$)",
    "^/x/reset_password/(.*|$)",
    "^/[^/]*/activity/?(\\?.*|$)",
    "^/work/sourcing($|\\?|/).*",
    "^/work/404($|\\?|/).*",
    "^/work/pricing-plans($|\\?|/).*",
    "^/work/iframe($|\\?|/).*",
    "^/work/subscribe-now($|\\?|/).*"
  ]
}
;
      HR.CKEDITOR_URL = "https://hrcdn.net/ckeditor/v4.11.4.2/ckeditor.js"
    </script>


    <!-- Load Jquery -->
  <script src="./Find_the_fourth_files/base-4e953f9582ddc0e62ee5b02dbe2520ca.js.download"></script>



    <script src="./Find_the_fourth_files/hackerrank_libraries-472ab268196cb375a77ca0ade4d2401f.js.download" crossorigin="anonymous"></script>
    <script src="./Find_the_fourth_files/codeshell-cdffcdf1564c6416e1a2eb207a4521ce.js.download" crossorigin="anonymous"></script>
    <script src="./Find_the_fourth_files/hackerrank-f73228533b0665995fcdc0e7bdc131a4.js.download" crossorigin="anonymous"></script>
    <script src="./Find_the_fourth_files/set-manifest-258c285f48d32f06117913c152075cfa239e4d61.js.download" crossorigin="anonymous"></script>
    <script src="./Find_the_fourth_files/require-76e24a0ace8716757c96e986f7dc9e07.js.download" crossorigin="anonymous"></script>
    <script src="./Find_the_fourth_files/dashboard-183d9c4c0e5680a01b67b78570aa29f6.js.download" crossorigin="anonymous"></script>




<!-- jsCookies -->


<script type="text/javascript">
  window.extern_script_delay = 0;
  if (window.PRODUCT_NAMESPACE === 'hackerrank' && typeof($) === "function") {
    $(window).on("load", function(){
      if (('performance' in window) && ('timing' in window.performance)) {
        dom_time = window.performance.timing.domInteractive - window.performance.timing.navigationStart;
        if (dom_time > 12000) {
          window.extern_script_delay = 3000;
        } else if (dom_time > 7000) {
          window.extern_script_delay = 2000;
        } else if (dom_time > 6000) {
          window.extern_script_delay = 1000;
        }
      }
    });
  }
</script>

<script>
</script>

<script>
</script>

<!-- Google Analytics -->
<script type="text/javascript">
  $(window).on("load", function() {
    setTimeout(function() {
    (function() { var ga = document.createElement('script'); ga.type = 'text/javascript'; ga.async = true; ga.src = ('https:' == document.location.protocol ? 'https://ssl' : 'http://www') + '.google-analytics.com/ga.js'; var s = document.getElementsByTagName('script')[0]; s.parentNode.insertBefore(ga, s); })();
    }, window.extern_script_delay);
  });
</script>

<!-- Mixpanel Stub -->
<script type="text/javascript">
  window.mixpanel = window.mixpanel || [];
  var attrs = "disable track track_pageview track_links track_forms register register_once alias unregister identify name_tag set_config people.set people.set_once people.increment people.append people.track_charge people.clear_charges people.delete_user".split(" ");
  for (var attribute in attrs) {
      mixpanel[attrs[attribute]] = function () {};
  }
</script>

<script type="text/javascript">
  if (window.dataLayer) {
      const gaUserId = 'a70a74ac1b73bc1cdffb28f77649f47abb362abc';
      dataLayer.push({'event': 'identify', 'gaUserId': gaUserId});

      dataLayer.push({'event': 'setUserProps', 'userProps': {
        level: '1',
        badges_onboarding_status: 'done',
        jobs_consent: ''
      }});
  }
</script>


    <!-- End of hackerrank Zendesk Widget script -->

<!-- Filepicker -->
<script type="text/javascript">
  $(window).on("load", function() {
    setTimeout(function() {
    (function(a){if(window.filepicker){return}var b=a.createElement("script");b.type="text/javascript";b.async=!0;b.src=("https:"===a.location.protocol?"https:":"http:")+"//api.filepicker.io/v2/filepicker.js";var c=a.getElementsByTagName("script")[0];c.parentNode.insertBefore(b,c);var d={};d._queue=[];var e="pick,pickMultiple,pickAndStore,read,write,writeUrl,export,convert,store,storeUrl,remove,stat,setKey,constructWidget,makeDropPane".split(",");var f=function(a,b){return function(){b.push([a,arguments])}};for(var g=0;g<e.length;g++){d[e[g]]=f(e[g],d._queue)}window.filepicker=d})(document);
    filepicker.setKey("ApehXMbvXTWqWab7OmMr9z");
    }, window.extern_script_delay);
  });
</script>

<script type="text/javascript">
  window._fbq = window._fbq || [];
</script>

<!-- bizible -->
<script>
  $(window).on("load", function() {
    setTimeout(function() {
    (function(d, t) {
      var g = d.createElement(t),
          s = d.getElementsByTagName(t)[0];
      g.src = '//cdn.bizible.com/scripts/bizible.js';
      s.parentNode.insertBefore(g, s);
    }(document, 'script'));
    }, window.extern_script_delay);
  });
</script>


<script type="text/javascript">

    !function(obj){window.hr_metrics=obj,obj.loaded=!0,obj.config=obj.config||{},obj._b=obj._b||[],obj.init=function(options){this.config=$.extend({product:null,use_cookie:!1,uid_cookie_key:null,session_cookie_key:null,session_id:null,uid_token:null,uid_token_cookie_key:null,uid:Math.floor(1e12*(1+Math.random())).toString(16),metrics_endpoint:null,batch_track_interval:2e3,enable_gtm:!1},this.config||{},options||{})},obj.get_session_id=function(){return this.config.session_id?this.config.session_id:this.config.session_cookie_key?$.cookie(this.config.session_cookie_key):null},obj.get_uid_data=function(){return this.config.use_cookie?{uid:$.cookie(this.config.uid_cookie_key),uid_token:$.cookie(this.config.uid_token_cookie_key)}:{uid:this.config.uid,uid_token:this.config.uid_token}},obj.get_session_params=function(){var session_params={session_landing_url:$.cookie("session_landing_url"),session_referrer:$.cookie("session_referrer"),session_referring_domain:$.cookie("session_referring_domain")};try{var utm_params=$.cookie("session_utm_params");utm_params&&(utm_params=JSON.parse(utm_params),session_params.session_utm_source=utm_params.s,session_params.session_utm_medium=utm_params.m,session_params.session_utm_campaign=utm_params.c)}catch(e){}return session_params},obj.track=function(event_name,event_value,attrs,use_beacon){var common_attrs={session_id:this.get_session_id()},attrs=$.extend({},attrs,common_attrs,this.get_session_params()),_tracking_data=$.extend({product:this.config.product,event_name:event_name,event_value:event_value,params:attrs},this.get_uid_data());this._post_tracking_data(_tracking_data,use_beacon),this._push_to_gtm(event_name,event_value,attrs)},obj.batch_track=function(event_name,event_value,attrs,use_beacon){this._EVENT_ARRAY=this._EVENT_ARRAY||[];var common_attrs={session_id:this.get_session_id()},attrs=$.extend({},attrs,common_attrs),_tracking_data={event_name:event_name,event_value:event_value,params:attrs};this._EVENT_ARRAY.push({time:(new Date).getTime(),url:document.location.href,track_data:_tracking_data}),this._event_batch_track_id||(this._event_batch_track_id=window.setInterval(function(that){return function(){that.batch_track_record()}}(this),this.config.batch_track_interval)),this._push_to_gtm(event_name,event_value,attrs)},obj.batch_track_record=function(use_beacon){if("object"==typeof this._EVENT_ARRAY&&this._EVENT_ARRAY.length>0){var _tracking_data_array=this._EVENT_ARRAY;this._EVENT_ARRAY=[];var _tracking_data=$.extend({product:this.config.product,batch_request:"true",current_time:(new Date).getTime(),data_array:JSON.stringify(_tracking_data_array),session_params:JSON.stringify(this.get_session_params())},this.get_uid_data());this._post_tracking_data(_tracking_data,use_beacon)}},obj._post_tracking_data=function(data,use_beacon){var metrics_endpoint=this.config.metrics_endpoint;if(use_beacon===!0&&"object"==typeof window.navigator&&"function"==typeof window.navigator.sendBeacon){var jsonContent="params_stream="+encodeURIComponent(JSON.stringify(data)),_json_blob=new Blob([jsonContent],{type:"application/x-www-form-urlencoded; charset=UTF-8"});window.navigator.sendBeacon(metrics_endpoint,_json_blob)}else $.ajax({type:"POST",url:metrics_endpoint,crossDomain:!0,xhrFields:{withCredentials:!0},beforeSend:function(xhr){return!0},data:data})},obj._push_to_gtm=function(event_name,event_value,attrs){this.config.enable_gtm&&window.dataLayer&&window.dataLayer.push({event:"track",eventName:event_name,eventValue:event_value,eventAttrs:attrs})},function(o){if(Array.isArray(o._b)){for(var i=0;i<o._b.length;i++){var e=o._b[i];o[e[0]]&&"function"==typeof o[e[0]]&&o[e[0]].apply(o,e[1])}o._b=[]}}(obj)}(window.hr_metrics||{});
//# sourceMappingURL=https://staging.hackerrank.net/assets/sourcemaps/hr_metrics-ec12c440e5fad784865a8eea2be0bede.js.map

  (function() {
    hr_metrics.init({
      product: 'hackerrank',
      use_cookie: true,
      uid_cookie_key: 'hackerrank_mixpanel_token',
      uid_token_cookie_key: 'metrics_user_identifier',
      session_cookie_key: 'session_id',
      metrics_endpoint: 'https://metrics.hackerrank.com/metrics',
      enable_gtm: true
    });
  })();

  //tracking hrutm_ parameters
  $(window).on("load", function() {
    (function(){
      var sPageURL = window.location.search.substring(1);
      var sURLVariables = sPageURL.split('&');
      var trackingData;
      for(var i = 0; i < sURLVariables.length; i++) {
        var sParameterName = sURLVariables[i].split('=');
        if(sParameterName[0] == 'utm_source') {
          trackingData = decodeURIComponent(escape(sParameterName[1]));
          hr_metrics.batch_track(trackingData.event_name, trackingData)
        } else if (sParameterName[0] == 'ad-campaign' && sParameterName[1]=='Mkt1010415') {
          if(typeof HR !== "undefined" && HR !== null && (!HR.PREFETCH_DATA.profile || !HR.PREFETCH_DATA.profile.created_at)){
            document.cookie = "fb_ad_campaign_source="+sParameterName[1]+";path=/";
          }
        }
      }
    })();

    if(typeof HR !== "undefined" && HR !== null && HR.PREFETCH_DATA && HR.PREFETCH_DATA.profile &&  HR.PREFETCH_DATA.profile.created_at) {
      if($.cookie('fb_ad_campaign_source')) {
        window._fbq.push(['track', '6023409928156', {'value':'0.01','currency':'USD'}]);
        $.removeCookie('fb_ad_campaign_source', { path: '/' });
      }
    }
  });
</script>

  <script type="text/javascript">
    window.hr_metrics_extension_track = true;

      !function(obj){window.hr_metrics=obj,obj.externalService=function(event_type,event_value,attrs,service){attrs="undefined"!=typeof attrs?attrs:{},attrs.session_id=this.get_session_id(),service="undefined"!=typeof service?service:"mixpanel:heap",external_services=service.split(":")},obj.app_track=function(key,attrs){window.APP_METRICS=window.APP_METRICS||[],common_attrs={uid:$.cookie("hackerrank_mixpanel_token")},attrs=$.extend({},attrs,common_attrs),window.APP_METRICS.push({key:key,meta_data:attrs}),window.app_track_interval_id||(window.app_track_interval_id=window.setInterval(hr_metrics._send_app_track_data,5e3))},obj._send_app_track_data=function(){if(window.APP_METRICS&&window.APP_METRICS.constructor===Array&&!(window.APP_METRICS.length<=0)){var track_data={data:window.APP_METRICS};window.APP_METRICS=[];var metrics_endpoint="https://metrics.hackerrank.com/app_metrics";window.HR&&window.HR.development&&(metrics_endpoint="/app_metrics"),"function"==typeof moment&&"function"==typeof moment.tz&&(track_data.local_timezone=moment.tz.guess()),track_data.default_cdn_url=jsCookies.get("default_cdn_url"),track_data.document_referrer=document.referrer,$.ajax({type:"POST",url:metrics_endpoint,crossDomain:!0,xhrFields:{withCredentials:!0},beforeSend:function(xhr){return!0},data:JSON.stringify(track_data),dataType:"json",contentType:"application/json"})}},obj.track_dwell_time=function(pathname,use_beacon){if(this._navigation_data&&this._navigation_data.page==pathname){var time_now=(new Date).getTime();this.batch_track("DwellTime",pathname,{attribute7:parseInt((time_now-(this._navigation_data.time||time_now))/1e3)},use_beacon)}},obj.set_navigation_data=function(pathname){this._navigation_data={page:pathname||document.location.pathname,time:(new Date).getTime()}},window.APP_METRIC_TRACKING_ENABLED&&"performance"in window&&"timing"in window.performance&&$(window).on("load",function(){setTimeout(function(){if(timing=window.performance.timing,obj={referring_url:window.location.pathname,fullLoadTime:timing.loadEventEnd-timing.navigationStart,loadTime:timing.loadEventEnd-timing.fetchStart,domReadyTime:timing.domComplete-timing.domInteractive,readyStart:timing.fetchStart-timing.navigationStart,redirectTime:timing.redirectEnd-timing.redirectStart,appcacheTime:timing.domainLookupStart-timing.fetchStart,unloadEventTime:timing.unloadEventEnd-timing.unloadEventStart,lookupDomainTime:timing.domainLookupEnd-timing.domainLookupStart,connectTime:timing.connectEnd-timing.connectStart,requestTime:timing.responseEnd-timing.requestStart,initDomTreeTime:timing.domInteractive-timing.responseEnd,loadEventTime:timing.loadEventEnd-timing.loadEventStart},"navigation"in window.performance&&"getEntries"in window.performance&&(obj.navigationType=window.performance.navigation.type,obj.navigationRedirectCount=window.performance.navigation.redirectCount,obj.fullLoadTime>8e3))try{var entries=window.performance.getEntries();entries[0].toJSON&&(obj.networkRequests=entries.map(function(e){return e.toJSON()}))}catch(e){}hr_metrics.app_track("page-load-metrics",obj)},1e3)}),$(window).on("load",function(){var _pathname=document.location.pathname,cdn_url_switched=jsCookies.get("cdn_url_switched");""!==cdn_url_switched&&jsCookies.destroy("cdn_url_switched"),hr_metrics.batch_track("PageLoad",_pathname+document.location.search,{attribute1:_pathname,attribute6:cdn_url_switched,cdn_url:jsCookies.get("cdn_url")})})}(window.hr_metrics||{}),function(){"function"==typeof $&&window.hr_metrics_extension_track&&$(window).on("load",function(){var _pathname=document.location.pathname;hr_metrics.track_dwell_time&&(hr_metrics.track_dwell_time(_pathname),hr_metrics.set_navigation_data()),$(window).on("beforeunload",function(){var _pathname=document.location.pathname;hr_metrics.batch_track("PageClose",_pathname+document.location.search,{attribute2:_pathname},!0),hr_metrics.track_dwell_time&&hr_metrics.track_dwell_time(_pathname,!0),window.typingTimeout&&(window.clearTimeout(window.typingTimeout),window.triggerTypingEvent&&window.typingEventEnabled&&window.triggerTypingEvent()),hr_metrics.batch_track_record(!0)})})}();
//# sourceMappingURL=https://staging.hackerrank.net/assets/sourcemaps/hr_metrics_extension-da53dd05532d1daf5150f31b3a20b90d.js.map
  </script>

<!-- Load Facebook SDK for JavaScript -->
<script>
;(function(){
  // Function to have a list of functions to load on fbAsyncInit
  var toLoad = []
  window.fbReady = function(func){
    if( typeof func === 'function') {
      if( window.FB ) {
        func.call(window)
      } else {
        toLoad.push(func)
      }
    }
  }

  window.fbAsyncInit = function() {
    FB.init({
      appId      : '347499128655783',
      xfbml      : true,
      version    : 'v2.5',
      caption    : 'HackerRank.com',
    });

    // Execute all the fbAsyncInit functions
    toLoad.forEach(function(func){
      func.call(window)
    })
  };
})();
/*
$(window).on("load", function() {
  setTimeout(function() {
    (function(d, s, id){
       var js, fjs = d.getElementsByTagName(s)[0];
       if (d.getElementById(id)) {return;}
       js = d.createElement(s); js.id = id;
       js.src = "//connect.facebook.net/en_US/sdk.js";
       fjs.parentNode.insertBefore(js, fjs);
    }(document, 'script', 'facebook-jssdk'));
  }, window.extern_script_delay);
});
*/
</script>
<!-- Load Twitter SDK for JavaScript -->
<script>
window.twttr = (function() {
  t = window.twttr || {};
  if (typeof t.ready === 'undefined') {
    t._e = [];
    t.ready = function(f) {
      t._e.push(f);
    };
  }
  return t;
})();
$(window).on("load", function() {
  setTimeout(function() {
    (function(d, s, id){
       var js, fjs = d.getElementsByTagName(s)[0];
       if (d.getElementById(id)) {return;}
       js = d.createElement(s); js.id = id;
       js.src = "https://platform.twitter.com/widgets.js";
       fjs.parentNode.insertBefore(js, fjs);
    }(document, 'script', 'twitter-wjs'));
  }, window.extern_script_delay);
});
</script>

<script type="text/javascript">
    if (typeof($) == "function") {
        $(document).ready(function() {
            function we_are_hiring() {
                lines = [
                    "===============================================================================",
                    ",--.  ,--.              ,--.                 ,------.                 ,--.     ",
                    "|  '--'  | ,--,--. ,---.|  |,-. ,---. ,--.--.|  .--. ' ,--,--.,--,--, |  |,-.  ",
                    "|  .--.  |' ,-.  || .--'|     /| .-. :|  .--'|  '--'.'' ,-.  ||      \\|     /  ",
                    "|  |  |  |\\ '-'  |\\ `--.|  \\  \\\\   --.|  |   |  |\\  \\ \\ '-'  ||  ||  ||  \\  \\  ",
                    "`--'  `--' `--`--' `---'`--'`--'`----'`--'   `--' '--' `--`--'`--''--'`--'`--' ",
                    "===============================================================================",
                    "  You opened the console! Know some code, do you? Want to work for one of the  ",
                    "  best startups around? https://www.hackerrank.com/careers                     ",
                    "==============================================================================="
                ]
                for (i = 0; i < lines.length; i ++) {
                    console.log(lines[i]);
                }
            }
            setTimeout(we_are_hiring, 5000);
            if(window.trackJs) {
              trackJs.track("Page Loaded");
            }
        });
    }
</script>

<!-- Some Black Magic for Internet Explorer -->

<!--[if lt IE 10]>
<script src="https://hrcdn.net/hackerrank/assets/jquery-plugins/jQuery.XDomainRequest-28488b2668d975b95331be79582a53fc.js"></script>
<![endif]-->

<!--[if lt IE 9]>
<script src="https://cdnjs.cloudflare.com/ajax/libs/html5shiv/3.6/html5shiv.min.js" type="text/javascript"></script>
<![endif]-->

<!-- Chrome Frame for IE6 -->
<!--[if lt IE 7 ]>
 <script src="https://ajax.googleapis.com/ajax/libs/chrome-frame/1.0.2/CFInstall.min.js"></script><script>window.attachEvent("onload",function(){CFInstall.check({mode:"overlay"})})</script>
<![endif]-->

<!--[if lte IE 9]>
<script>
    IE_BROWSER = true
</script>
<![endif]-->

<!-- Track button clicks -->
<script type="text/javascript">
    $(document).on('click', 'a, button, input, select, i', null, function(e) {
        var src = e.currentTarget, $src = $(e.currentTarget);
        if ($src.attr('data-analytics')) {
            action = 'Click'; data = $src.attr('data-analytics');
        } else {
            return;
        }

            hr_metrics.batch_track(action, data, (function() {
                var params={};
                for (var _i=1; _i<=12; ++_i){
                    var _attr = 'data-attr'+_i;
                    if ($src.attr(_attr)){
                        params['attribute'+_i] = $src.attr(_attr);
                }}
                var attributes = src.attributes, attr_length = src.attributes.length;
                for (var i = 0; i < attr_length; i++){
                  var attribute = attributes[i];
                  if (attribute.name.indexOf('data-attr-') === 0){
                    param_name = attribute.name.substr('data-attr-'.length);
                    if (param_name.length > 0) {
                      params[param_name] = attribute.value;
                    }
                  }
                }
                return params;
            })());
        // google analytics
        _gaq.push(['_trackEvent', 'Events' , action, data])
    });

    $(document).on('AnalyticsEvent', function(e) {
        action = e.event_type || false
        data = e.event_name || false

        if (!action || !data)
          return

        params = {}
        params['attribute1'] = e.event_value || ""
        params['attribute7'] = e.integer_event_value

        if (window.HR && window.HR.current_page)
          params['attribute2'] = window.HR.current_page

        if (window.HR && window.HR.current_contest)
          params['attribute3'] = window.HR.current_contest.get('name')

            hr_metrics.batch_track(action, data, params);
        // google analytics
        _gaq.push(['_trackEvent', 'Events' , action, data])
    });
</script>


<!-- Google Tag Manager (noscript) #1 -->
<noscript><iframe src="https://www.googletagmanager.com/ns.html?id=GTM-5FXW96J"
height="0" width="0" style="display:none;visibility:hidden"></iframe></noscript>
<!-- End Google Tag Manager (noscript) #1 -->



<div class="offline-ui offline-ui-up"><div class="offline-ui-content"></div><a href="https://www.hackerrank.com/" class="offline-ui-retry"></a></div><div class="offline-ui offline-ui-up"><div class="offline-ui-content"></div><a href="https://www.hackerrank.com/" class="offline-ui-retry"></a></div><iframe name="filepicker_comm_iframe" id="filepicker_comm_iframe" src="./Find_the_fourth_files/saved_resource.html" style="display: none;"></iframe><iframe name="fpapi_comm_iframe" id="fpapi_comm_iframe" src="./Find_the_fourth_files/saved_resource(1).html" style="display: none;"></iframe><iframe scrolling="no" frameborder="0" allowtransparency="true" src="./Find_the_fourth_files/widget_iframe.86df6234483a1fa251e365dd8643c136.html" title="Twitter settings iframe" style="display: none;"></iframe><img src="./Find_the_fourth_files/ipv" style="display: none;"><img src="./Find_the_fourth_files/ipv(1)" style="display: none;"><link rel="stylesheet" href="./Find_the_fourth_files/animate-702952f12d9729d5ba7d2be8fc590d83.css" media="all"><img src="./Find_the_fourth_files/ipv(2)" style="display: none;"><img src="./Find_the_fourth_files/ipv(3)" style="display: none;"><img src="./Find_the_fourth_files/ipv(4)" style="display: none;"><img src="./Find_the_fourth_files/ipv(5)" style="display: none;"><span role="status" aria-live="assertive" aria-relevant="additions" class="ui-helper-hidden-accessible"></span><img src="./Find_the_fourth_files/ipv(6)" style="display: none;"><img src="./Find_the_fourth_files/ipv(7)" style="display: none;"><img src="./Find_the_fourth_files/ipv(8)" style="display: none;"><img src="./Find_the_fourth_files/ipv(9)" style="display: none;"><img src="./Find_the_fourth_files/ipv(10)" style="display: none;"><img src="./Find_the_fourth_files/ipv(11)" style="display: none;"><ul class="ui-autocomplete ui-front ui-menu ui-widget ui-widget-content theme-m-content" id="ui-id-73" tabindex="0" style="display: none;"></ul><span role="status" aria-live="assertive" aria-relevant="additions" class="ui-helper-hidden-accessible"></span><span role="status" aria-live="assertive" aria-relevant="additions" class="ui-helper-hidden-accessible"></span><img src="./Find_the_fourth_files/ipv(12)" style="display: none;"><span role="status" aria-live="assertive" aria-relevant="additions" class="ui-helper-hidden-accessible"></span><img src="./Find_the_fourth_files/ipv(13)" style="display: none;"><ul class="ui-autocomplete ui-front ui-menu ui-widget ui-widget-content theme-m-content" id="ui-id-86" tabindex="0" style="display: none;"></ul><span role="status" aria-live="assertive" aria-relevant="additions" class="ui-helper-hidden-accessible"></span><img src="./Find_the_fourth_files/ipv(14)" style="display: none;"><span role="status" aria-live="assertive" aria-relevant="additions" class="ui-helper-hidden-accessible"></span><img src="./Find_the_fourth_files/ipv(15)" style="display: none;"><img src="./Find_the_fourth_files/ipv(16)" style="display: none;"><img src="./Find_the_fourth_files/ipv(17)" style="display: none;"><img src="./Find_the_fourth_files/ipv(18)" style="display: none;"><img src="./Find_the_fourth_files/ipv(19)" style="display: none;"><img src="./Find_the_fourth_files/ipv(20)" style="display: none;"><img src="./Find_the_fourth_files/ipv(21)" style="display: none;"><img src="./Find_the_fourth_files/ipv(22)" style="display: none;"><img src="./Find_the_fourth_files/ipv(23)" style="display: none;"><img src="./Find_the_fourth_files/ipv(24)" style="display: none;"><img src="./Find_the_fourth_files/ipv(25)" style="display: none;"><img src="./Find_the_fourth_files/ipv(26)" style="display: none;"><img src="./Find_the_fourth_files/ipv(27)" style="display: none;"><img src="./Find_the_fourth_files/ipv(28)" style="display: none;"><img src="./Find_the_fourth_files/ipv(29)" style="display: none;"><img src="./Find_the_fourth_files/ipv(30)" style="display: none;"><img src="./Find_the_fourth_files/ipv(31)" style="display: none;"><img src="./Find_the_fourth_files/ipv(32)" style="display: none;"><img src="./Find_the_fourth_files/ipv(33)" style="display: none;"><img src="./Find_the_fourth_files/ipv(34)" style="display: none;"><img src="./Find_the_fourth_files/ipv(35)" style="display: none;"><img src="./Find_the_fourth_files/ipv(36)" style="display: none;"><img src="./Find_the_fourth_files/ipv(37)" style="display: none;"><img src="./Find_the_fourth_files/ipv(38)" style="display: none;"><img src="./Find_the_fourth_files/ipv(39)" style="display: none;"><img src="./Find_the_fourth_files/ipv(40)" style="display: none;"><img src="./Find_the_fourth_files/ipv(41)" style="display: none;"><img src="./Find_the_fourth_files/ipv(42)" style="display: none;"><img src="./Find_the_fourth_files/ipv(43)" style="display: none;"><img src="./Find_the_fourth_files/ipv(44)" style="display: none;"><img src="https://cdn.bizible.com/m/ipv?_biz_r=https%3A%2F%2Fwww.hackerrank.com%2Fcontests%2Fse-weekly-coding-div-a-13032020%2Fchallenges%2Ffind-the-fourth%2Fcopy-from%2F1324155159&amp;_biz_h=-884118237&amp;_biz_u=80417c97096849a0a0c0f25167334bfd&amp;_biz_s=fc6b2&amp;_biz_l=https%3A%2F%2Fwww.hackerrank.com%2Fcontests%2Fse-weekly-coding-div-a-13032020%2Fchallenges%2Ffind-the-fourth%2Fsubmissions%2Fcode%2F1324155159&amp;_biz_t=1591691915259&amp;_biz_i=Find%20the%20Fourth%20Submission%20%231324155159%20%7C%20SE_WEEKLY_CODING_DIV-A_08042020%20Question%20%7C%20Contests%20%7C%20HackerRank&amp;_biz_n=90&amp;rnd=495807&amp;cdn_o=a&amp;_biz_z=1591691915260" style="display: none;"><span role="status" aria-live="assertive" aria-relevant="additions" class="ui-helper-hidden-accessible"></span></body></html>