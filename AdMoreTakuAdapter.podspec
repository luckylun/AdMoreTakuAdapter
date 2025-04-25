Pod::Spec.new do |s|

  s.name             = 'AdMoreTakuAdapter'
  s.version          = '1.0.0'
  s.summary          = 'AdMore adapter for Taku mediation.'
  s.description      = 'A lightweight .framework adapter to integrate AdMore with Taku mediation.'
  s.homepage         = 'https://github.com/luckylun/AdMoreTakuAdapter'
  s.license          = { :type => 'MIT' }
  s.author           = { 'luckylun' => '598922488@qq.com' }
  #s.source           = { :http => 'https://github.com/luckylun/AdMoreTakuAdapter/releases/download/1.0.0/AdMoreTakuAdapter.framework.zip' }
  s.source   	     = { :git => 'https://github.com/luckylun/AdMoreTakuAdapter.git', :tag => s.version }
  s.platform         = :ios, '12.0'
  s.vendored_frameworks = 'AdMoreTakuAdapter.framework'
  s.swift_version    = '5.0'

  # 如果有依赖其他 pods
  # s.dependency 'AdMoreSDK'
  # s.dependency 'TakuSDK'

end
